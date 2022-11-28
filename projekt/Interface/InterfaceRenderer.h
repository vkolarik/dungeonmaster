//
// Created by root on 18.11.2022.
//

#ifndef PROJEKT_INTERFACERENDERER_H
#define PROJEKT_INTERFACERENDERER_H


#include <iostream>
#include "../Logic/GameState.h"
#include "vector"
#include "RenderableBlock.h"

class InterfaceRenderer {
private:
    std::vector<RenderableBlock*> m_renderable_blocks;
public:
    static const int UI_HEADER = 0;
    static const int UI_GAME = 1;
    static const int UI_INVENTORY = 2;
    static const int UI_STATS = 3;
    static const int UI_HINTS = 4;
    static const int UI_CONTROLS = 5;
    InterfaceRenderer();
    static void printToXY(int x, int y, std::string s);
    static void printCharToXY(int x, int y, char s);
    void printGameState(GameState* gameState);
};


#endif //PROJEKT_INTERFACERENDERER_H
