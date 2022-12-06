//
// Created by adamz on 6. 12. 2022.
//

#ifndef PROJEKT_WEAPONS_H
#define PROJEKT_WEAPONS_H

#include "../GameTile.h"

class Weapons : public GameTile {
private:
    char m_shortcut = 'W';
    std::string m_name;
    int m_damage;
public:
    Weapons(std::string name, int damage);
    std::string getName();
    int getDamage();
    char render();
    GameTile* interact(Player* player);

};


#endif //PROJEKT_WEAPONS_H
