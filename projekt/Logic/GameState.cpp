//
// Created by root on 18.11.2022.
//

#include "GameState.h"
#include "../Resources/Tiles/Wall.h"

bool GameState::needsRerender(int blockId) {
    //TODO vratit tohle zpet
    //return m_needs_rerender[blockId];
    return true;
}

GameState::GameState() {
    collectionToRender = new GameTileCollection();
}

GameTileCollection *GameState::getCollectionToRender() {
    return collectionToRender;
}
