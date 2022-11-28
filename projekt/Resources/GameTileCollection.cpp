//
// Created by root on 24.11.2022.
//

#include "GameTileCollection.h"
#include "..\GameEngine.h"
#include "Tiles/Wall.h"
/*
GameTileCollection::GameTileCollection() {
    std::vector<GameTile*> pom;
    for (int i = 0; i < GameEngine::GAME_SIZE; ++i) {
        pom.clear();
        for (int j = 0; j < GameEngine::GAME_SIZE; ++j) {
            pom.push_back(new Wall());
            //setTileAt(i, j, new Wall());
        }
        m_collection.push_back(pom);
    }
}*/

GameTile *GameTileCollection::getTileAt(int x, int y) {
    return m_collection.at(x).at(y);
}

void GameTileCollection::setTileAt(int x, int y, GameTile* gameTile) {
    m_collection.at(x).at(y) = gameTile;
}

GameTileCollection::GameTileCollection(std::vector<std::vector<GameTile *>> collection) {
    m_collection = collection;
}
