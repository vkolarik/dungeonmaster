//
// Created by root on 23.11.2022.
//

#ifndef PROJEKT_RENDERABLEBLOCK_H
#define PROJEKT_RENDERABLEBLOCK_H

#include "iostream"
#include "../Logic/GameState.h"


class RenderableBlock {
protected:
    int m_start_x, m_start_y, m_width, m_height, m_id;
    void fillWithChar(std::string s);
public:
    RenderableBlock(int x, int y, int width, int height, int id);
    void clear();
    void fill();
    void print(int x, int y, std::string s);
    void checkAndRender(GameState* gameState);
    virtual void render(GameState* gameState) = 0;

};


#endif //PROJEKT_RENDERABLEBLOCK_H
