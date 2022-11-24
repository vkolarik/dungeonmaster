//
// Created by root on 24.11.2022.
//

#include "Stats.h"

Stats::Stats(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

void Stats::render(GameState *gameState) {
    fill();
    print(0, 0, "Staty");
}
