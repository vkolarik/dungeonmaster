//
// Created by root on 24.11.2022.
//

#include "Stats.h"
#include "../InterfaceRenderer.h"

Stats::Stats(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

void Stats::render(GameState *gameState) {
    printBorder();
    printToCenter( 0, "Staty");
    print(1, 1, std::to_string(gameState->getPlayer()->deleteAfterTest));
    gameState->setNeedsRender(InterfaceRenderer::UI_STATS, false);
}
