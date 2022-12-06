//
// Created by root on 06.12.2022.
//

#include "Weapon.h"

Weapon::Weapon(std::string name) {
    m_name = name;
}

std::string Weapon::getName() {
    return m_name;
}
