//
// Created by adamz on 1. 12. 2022.
//

#include "Potion.h"

Potion::Potion(std::string name, float bonus) {
    m_name = name;
    m_bonus = bonus;
}

std::string Potion::getName() {
    return m_name;
}

float Potion::getBonus() {
    return m_bonus;
}