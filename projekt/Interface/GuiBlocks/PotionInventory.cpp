//
// Created by root on 06.12.2022.
//

#include "PotionInventory.h"

void PotionInventory::render(GameState* gameState) {
    printBorder();
    printToCenter(0, "Potiony");

}

PotionInventory::PotionInventory(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height,
                                                                                                id) {

}
