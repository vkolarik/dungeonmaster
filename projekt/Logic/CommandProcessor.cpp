//
// Created by root on 18.11.2022.
//

#include "CommandProcessor.h"
#include "..\GameEngine.h"
#include "../Resources/Tiles/FreeSpace.h"

GameState *CommandProcessor::processCommand(int command, GameState *gameState) {
    int moveX = 0, moveY = 0;

    switch (command) {
        case CommandProcessor::UP:
            moveY = -1;
            gameState->addHint("Nahoru");
            break;
        case CommandProcessor::DOWN:
            moveY = 1;
            gameState->addHint("Dolu");
            break;
        case CommandProcessor::LEFT:
            moveX = -1;
            gameState->addHint("Doleva");
            break;
        case CommandProcessor::RIGHT:
            moveX = 1;
            gameState->addHint("Doprava");
            break;
        default:
            return gameState;
    }

    moveX += gameState->getPlayer()->getLocationX();
    moveY += gameState->getPlayer()->getLocationY();


    //Priprava na kontrolu prechodu na jinou mapu
    int supposedNewActive = -1, supposedNewX = -1, supposedNewY = -1;

    //Nahoru
    if(moveY < 0) {
        supposedNewActive = gameState->getActiveMapIndex() - 3;
        supposedNewY = GameEngine::GAME_SIZE - 1;
    }
    //Dolu
    if(moveY >= GameEngine::GAME_SIZE) {
        supposedNewActive = gameState->getActiveMapIndex() + 3;
        supposedNewY = 0;
    }
    //Doleva
    if(moveX < 0) {
        //Podchytime utikani doleva
        if(gameState->getActiveMapIndex() + 1 == 1 || (gameState->getActiveMapIndex()) % 3 == 0) return gameState;
        supposedNewActive = gameState->getActiveMapIndex() - 1;
        supposedNewX = GameEngine::GAME_SIZE - 1;
    }
    //Doprava
    if(moveX >= GameEngine::GAME_SIZE) {
        //Podchytime utikani doleva
        if((gameState->getActiveMapIndex() + 1) % 3 == 0) return gameState;
        supposedNewActive = gameState->getActiveMapIndex() + 1;
        supposedNewX = 0;
    }

    //pokud je pohyb mimo ale neni mimo mensi 3x3 matrix
    if(supposedNewActive >= 0 and supposedNewActive <= 8) {
        //prejdi na jinou mapu a nastav nove souradnice pro playera
        gameState->setActiveMapIndex(supposedNewActive);
        gameState->addHint("Prechod na novou mapu: " + std::to_string(supposedNewActive));
        if (supposedNewY >= 0) gameState->getPlayer()->setLocationY(supposedNewY);
        if (supposedNewX >= 0) gameState->getPlayer()->setLocationX(supposedNewX);
        return gameState;
        //pokud sice nejdeme do jine mapy ale pretikame mimo hranice aktualni mapy
    }else if(moveX >= GameEngine::GAME_SIZE ||
            moveY >= GameEngine::GAME_SIZE ||
            moveX < 0 || moveY < 0){
        return gameState;
    }else{
        //jinak se zkus pohnout, pokud to jde udelej interakci a updatuj souradnice
        GameTile* tileToInteract = gameState->getCollectionToRender()->getTileAt(moveX, moveY);

        if(tileToInteract->isInteractable()){
            //TODO actually interact with it
            gameState->getCollectionToRender()->setTileAt(moveX, moveY, tileToInteract->interact(gameState->getPlayer()));
            gameState->addPixelUpdate(moveX, moveY);

            gameState->addHint("Provedena interakce na "+ std::to_string(moveX)+","+ std::to_string(moveY)+", mapa "+
                               std::to_string(gameState->getActiveMapIndex()));
        }
        if(tileToInteract->isPassthrough()){
            //pridame pixel update puvodni a nove pozice
            gameState->addPixelUpdate(gameState->getPlayer()->getLocationX(), gameState->getPlayer()->getLocationY());
            gameState->addPixelUpdate(moveX, moveY);
            //posuneme hrace
            gameState->getPlayer()->setLocationX(moveX);
            gameState->getPlayer()->setLocationY(moveY);
        }
    }

    return gameState;
}
