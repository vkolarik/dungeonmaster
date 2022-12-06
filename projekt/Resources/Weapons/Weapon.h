//
// Created by root on 06.12.2022.
//

#ifndef PROJEKT_WEAPON_H
#define PROJEKT_WEAPON_H


#include <string>

class Weapon {
//Virtual
private:
    std::string m_name;
public:
    Weapon(std::string name);
    std::string getName();
};


#endif //PROJEKT_WEAPON_H
