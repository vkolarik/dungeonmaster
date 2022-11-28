//
// Created by root on 23.11.2022.
//

#include "RenderableBlock.h"
#include "InterfaceRenderer.h"

RenderableBlock::RenderableBlock(int x, int y, int width, int height, int id) {
    m_start_x = x;
    m_start_y = y;
    m_width = width;
    m_height = height;
    m_id = id;
}

void RenderableBlock::print(int x, int y, std::string s) {
    InterfaceRenderer::printToXY(x+m_start_x, y+m_start_y, s);
}

void RenderableBlock::printChar(int x, int y, char c) {
    InterfaceRenderer::printCharToXY(x+m_start_x, y+m_start_y, c);
}

void RenderableBlock::clear() {
    fillWithChar(" ");
}

void RenderableBlock::fill() {
    fillWithChar("X");
}

void RenderableBlock::fillWithChar(std::string s) {
    std::string line = "";
    for (int i = 0; i < m_width; ++i) {
        line = line.append(s);
    }
    for (int i = 0; i < m_height; ++i) {
        RenderableBlock::print(0, i, line);
    }
}

void RenderableBlock::checkAndRender(GameState *gameState) {
    if(gameState->needsRerender(m_id)) render(gameState);
}
