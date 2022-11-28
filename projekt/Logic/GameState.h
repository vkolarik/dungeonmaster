//
// Created by root on 18.11.2022.
//

#ifndef PROJEKT_GAMESTATE_H
#define PROJEKT_GAMESTATE_H


#include "../Resources/GameTile.h"
#include "../Resources/GameTileCollection.h"

class GameState {
private:
    bool m_needs_rerender[10] = {true, false, false, false, false, false, false, false, false, false};
    GameTileCollection* collectionToRender;
public:
    GameState();
    bool needsRerender(int blockId);
    GameTileCollection* getCollectionToRender();


};


#endif //PROJEKT_GAMESTATE_H
