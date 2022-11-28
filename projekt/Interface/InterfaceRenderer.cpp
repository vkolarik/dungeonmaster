//
// Created by root on 18.11.2022.
//

#include "InterfaceRenderer.h"
#include "iostream"
#include "windows.h"
#include "GuiBlocks/GameTitle.h"
#include "GuiBlocks/Inventory.h"
#include "GuiBlocks/Stats.h"
#include "GuiBlocks/GameField.h"
#include "GuiBlocks/Hints.h"
#include "GuiBlocks/Controls.h"

using namespace std;

void InterfaceRenderer::printToXY(int x, int y, string s){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << s;
}

void InterfaceRenderer::printCharToXY(int x, int y, char s) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
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
    GameTitle* gameTitle = new GameTitle(10, 1, 99, 3, InterfaceRenderer::UI_HEADER);
    m_renderable_blocks.push_back(gameTitle);

    Inventory* inventory = new Inventory(10, 5, 20, 16, InterfaceRenderer::UI_INVENTORY);
    m_renderable_blocks.push_back(inventory);

    Stats* stats = new Stats(89, 5, 20, 16, InterfaceRenderer::UI_STATS);
    m_renderable_blocks.push_back(stats);

    GameField* gameField = new GameField(40, 5, 40, 20, InterfaceRenderer::UI_GAME);
    m_renderable_blocks.push_back(gameField);

    Hints* hints = new Hints(10, 26, 99, 1, InterfaceRenderer::UI_HINTS);
    m_renderable_blocks.push_back(hints);

    Controls* controls = new Controls(10, 27, 99, 1, InterfaceRenderer::UI_CONTROLS);
    m_renderable_blocks.push_back(controls);
}


