//
// Created by root on 24.11.2022.
//

#include "Controls.h"

Controls::Controls(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

void Controls::render(GameState *gameState) {
    fill();
    print(0, 0, "[pohyb:sipky] [interakce:mezernik] [ukonceni:e]    Projekt ZOO 2022/23 xkolari1, xpecink1, xfilips1");
}
