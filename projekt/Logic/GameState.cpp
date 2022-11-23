//
// Created by root on 18.11.2022.
//

#include "GameState.h"

bool GameState::needsRerender(int blockId) {
    return m_needs_rerender[blockId];
}
