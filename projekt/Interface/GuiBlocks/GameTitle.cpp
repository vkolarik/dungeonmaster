//
// Created by root on 23.11.2022.
//

#include "GameTitle.h"
#include "../InterfaceRenderer.h"

void GameTitle::render(GameState *gameState) {
    //Render hlavicky
    fill();
    std::string message = "   Toto je nazev hry   ";
    print((m_width * 0.5) - (message.length() * 0.5), 1, message);
}

GameTitle::GameTitle(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}
