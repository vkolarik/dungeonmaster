//
// Created by root on 24.11.2022.
//

#ifndef PROJEKT_WALL_H
#define PROJEKT_WALL_H


#include "../GameTile.h"

class Wall : public GameTile {
public:
    Wall();
    char render();
};


#endif //PROJEKT_WALL_H
