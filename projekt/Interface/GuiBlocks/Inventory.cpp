//
// Created by root on 24.11.2022.
//

#include "Inventory.h"
#include "../InterfaceRenderer.h"

Inventory::Inventory(int x, int y, int width, int height, int id):RenderableBlock(x, y, width, height, id) {

}

void Inventory::render(GameState *gameState) {
    printBorder();
    printToCenter(0, "Inventar");
    gameState->setNeedsRender(InterfaceRenderer::UI_INVENTORY, false);
}
