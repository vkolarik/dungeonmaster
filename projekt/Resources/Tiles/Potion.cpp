//
// Created by adamz on 1. 12. 2022.
//

#include "Potion.h"
#include "FreeSpace.h"

Potion::Potion(std::string name, int bonus) {
    m_shortcut ;
    m_name = name;
    m_bonus = bonus;
    m_is_passthrough = true;
    m_is_interactable = true;
}

std::string Potion::getName() {
    return m_name;
}

int Potion::getBonus() {
    return m_bonus;
}

char Potion::render() {
    return m_shortcut;
}

//TODO potion sa prida do PotionInventory
GameTile *Potion::interact(Player *player) {
        return new FreeSpace();
}