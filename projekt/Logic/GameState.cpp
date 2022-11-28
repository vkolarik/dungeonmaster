//
// Created by root on 18.11.2022.
//

#include "GameState.h"
#include "../Resources/Tiles/Wall.h"
#include "../Resources/GameTileCollectionFactory.h"

bool GameState::needsRerender(int blockId) {
    return m_needs_rerender[blockId];
}

GameState::GameState() {
    auto* factory = new GameTileCollectionFactory();
    for (int i = 0; i < 8; ++i) {
        m_collections[i] = factory->createTileCollectionFromBlueprint(i);
    }
}

GameTileCollection *GameState::getCollectionToRender() {
    return m_collections[m_active_map_index];
}

Player *GameState::getPlayer() {
    return m_player;
}

void GameState::setNeedsRender(int blockId, bool value) {
    m_needs_rerender[blockId] = value;
}

int GameState::getActiveMapIndex() {
    return m_active_map_index;
}

void GameState::setActiveMapIndex(int index) {
    m_active_map_index = index;
}
