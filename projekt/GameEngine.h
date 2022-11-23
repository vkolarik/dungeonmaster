//
// Created by root on 18.11.2022.
//

#ifndef PROJEKT_GAMEENGINE_H
#define PROJEKT_GAMEENGINE_H

#include "iostream"
#include "Interface/InterfaceRenderer.h"
#include "Interface/InputHandler.h"
#include "Logic/CommandProcessor.h"


class GameEngine {
private:
    InterfaceRenderer* m_renderer = new InterfaceRenderer();
    GameState* m_game_state = new GameState();
    CommandProcessor* m_command_processor = new CommandProcessor();
public:
    static const bool DEBUG = true;
    void run();
    void handleAction(int action);

};





#endif //PROJEKT_GAMEENGINE_H
