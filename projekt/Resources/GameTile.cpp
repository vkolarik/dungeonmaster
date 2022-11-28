//
// Created by root on 24.11.2022.
//

#include "GameTile.h"

bool GameTile::isInteractable() {
    return m_is_interactable;
}

GameTile::GameTile(bool isInteractable, std::string description) {
    m_is_interactable = isInteractable;
    m_description = description;
}

