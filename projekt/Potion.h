//
// Created by adamz on 1. 12. 2022.
//

#ifndef PROJEKT_POTION_H
#define PROJEKT_POTION_H

#include <iostream>

class Potion {
private:
    std::string m_name;
    float m_bonus;
public:
    Potion(std::string name, float bonus);
    std::string getName();
    float getBonus();
    };


#endif //PROJEKT_POTION_H
