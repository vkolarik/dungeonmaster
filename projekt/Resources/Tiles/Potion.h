//
// Created by adamz on 1. 12. 2022.
//

#ifndef PROJEKT_POTION_H
#define PROJEKT_POTION_H

#include "../GameTile.h"

class Potion : public GameTile {
private:
    char m_shortcut = 'P';
    std::string m_name;
    int m_bonus;
public:
    Potion(std::string name, int bonus);
    std::string getName();
    int getBonus();
    char render();
    GameTile* interact(Player* player);
    };


#endif //PROJEKT_POTION_H
