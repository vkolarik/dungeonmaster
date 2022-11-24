//
// Created by root on 24.11.2022.
//

#ifndef PROJEKT_INVENTORY_H
#define PROJEKT_INVENTORY_H


#include "../RenderableBlock.h"

class Inventory : public RenderableBlock {
public:
    Inventory(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_INVENTORY_H
