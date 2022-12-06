//
// Created by adamz on 6. 12. 2022.
//

#include "Weapons.h"
#include "FreeSpace.h"

Weapons::Weapons(std::string name, int damage) {
    m_name = name;
    m_damage = damage;
    m_is_passthrough = true;
    m_is_interactable = true;
}

std::string Weapons::getName() {
    return m_name;
}

int Weapons::getDamage() {
    return m_damage;
}

char Weapons::render() {
    return m_shortcut;
}

GameTile *Weapons::interact(Player *player) {
    return new FreeSpace();
}