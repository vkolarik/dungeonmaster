//
// Created by root on 24.11.2022.
//

#include "Inventory.h"

Inventory::Inventory(int x, int y, int width, int height, int id):RenderableBlock(x, y, width, height, id) {

}

void Inventory::render(GameState *gameState) {
    fill();
    print(0, 0, "Inventar");
}
