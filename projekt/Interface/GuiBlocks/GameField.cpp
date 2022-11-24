//
// Created by root on 24.11.2022.
//

#include "GameField.h"

GameField::GameField(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

void GameField::render(GameState *gameState) {
    std::string line = "";
    for (int j = 0; j < m_width * 0.5; ++j) {
        line.append("X ");
    }
    for (int i = 0; i < m_height; ++i) {
        print(0, i, line);
    }
    print(0, 0, "GameField");
}
