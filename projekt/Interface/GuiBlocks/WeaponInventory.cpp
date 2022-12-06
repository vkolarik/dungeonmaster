//
// Created by root on 24.11.2022.
//

#include "WeaponInventory.h"
#include "../InterfaceRenderer.h"

WeaponInventory::WeaponInventory(int x, int y, int width, int height, int id): RenderableBlock(x, y, width, height, id) {}

void WeaponInventory::render(GameState *gameState) {
    printBorder();
    printToCenter(0, "WeaponInventory");
    //print(1, 1, std::to_string(gameState->getPlayer()->deleteAfterTest));
    gameState->setNeedsRender(InterfaceRenderer::UI_WEAPONS, false);
}
