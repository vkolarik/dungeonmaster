//
// Created by root on 18.11.2022.
//

#include "InterfaceRenderer.h"
#include "iostream"
#include "../GameEngine.h"
#include "windows.h"
#include "GuiBlocks/GameTitle.h"

using namespace std;

void InterfaceRenderer::printToXY(int x, int y, string s){
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << s;
}

void InterfaceRenderer::printGameState(GameState *gameState) {
    for(RenderableBlock* block : m_renderable_blocks){
        block->checkAndRender(gameState);
    }
}

InterfaceRenderer::InterfaceRenderer() {
    //V konstruktoru vytvorime jednotlive UI bloky
    GameTitle* gameTitle = new GameTitle(1, 10, 100, 3, InterfaceRenderer::UI_HEADER);
    m_renderable_blocks.push_back(gameTitle);
}
