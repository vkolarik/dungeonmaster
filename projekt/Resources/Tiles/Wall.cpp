//
// Created by root on 24.11.2022.
//

#include "Wall.h"

Wall::Wall() : GameTile(false, "Nepruchozi zed"){

}

char Wall::render() {
    return (char)220;
}
