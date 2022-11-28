//
// Created by root on 24.11.2022.
//

#include "GameField.h"
#include "../../GameEngine.h"

GameField::GameField(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

void GameField::render(GameState *gameState) {
    GameTileCollection* collection = gameState->getCollectionToRender();

    for (int i = 0; i < GameEngine::GAME_SIZE; ++i) {
        for (int j = 0; j < GameEngine::GAME_SIZE; ++j) {
            printChar(j*2, i, collection->getTileAt(j, i)->render());
        }
    }

    Player* player = gameState->getPlayer();
    printChar(player->getLocationX()*2, player->getLocationY(), player->render());
}
