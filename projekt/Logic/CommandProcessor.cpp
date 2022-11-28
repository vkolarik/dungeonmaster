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
            break;
        case CommandProcessor::DOWN:
            moveY = 1;
            break;
        case CommandProcessor::LEFT:
            moveX = -1;
            break;
        case CommandProcessor::RIGHT:
            moveX = 1;
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
        supposedNewActive = gameState->getActiveMapIndex() - 1;
        supposedNewX = GameEngine::GAME_SIZE - 1;
    }
    //Doprava
    if(moveX >= GameEngine::GAME_SIZE) {
        supposedNewActive = gameState->getActiveMapIndex() + 1;
        supposedNewX = 0;
    }

    //pokud je pohyb mimo
    if(supposedNewActive >= 0 and supposedNewActive <= 8){
        //prejdi na jinou mapu a nastav nove souradnice pro playera
        gameState->setActiveMapIndex(supposedNewActive);
        if(supposedNewY >= 0) gameState->getPlayer()->setLocationY(supposedNewY);
        if(supposedNewX >= 0) gameState->getPlayer()->setLocationX(supposedNewX);
    }else{
        //jinak se zkus pohnout, pokud to jde udelej interakci a updatuj souradnice
        GameTile* tileToInteract = gameState->getCollectionToRender()->getTileAt(moveX, moveY);

        if(tileToInteract->isInteractable()){
            //TODO actually interact with it
            gameState->getPlayer()->setLocationX(moveX);
            gameState->getPlayer()->setLocationY(moveY);
            gameState->getCollectionToRender()->setTileAt(moveY, moveX, new FreeSpace());
        }
    }

    return gameState;
}
