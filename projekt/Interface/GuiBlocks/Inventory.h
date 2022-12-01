//
// Created by root on 24.11.2022.
//

#ifndef PROJEKT_INVENTORY_H
#define PROJEKT_INVENTORY_H


#include "../RenderableBlock.h"
#include <vector>

class Inventory : public RenderableBlock {
private:
    //TODO vector m_inventroy;
public:
    Inventory(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_INVENTORY_H
