//
// Created by root on 18.11.2022.
//

#ifndef PROJEKT_GAMEENGINE_H
#define PROJEKT_GAMEENGINE_H

#include "iostream"
#include "Interface/InterfaceRenderer.h"
#include "Interface/InputHandler.h"


class GameEngine {
private:
    InterfaceRenderer* m_renderer = new InterfaceRenderer();
public:
    static const bool DEBUG = true;
    void run();
    void handleAction(int action);


};



#endif //PROJEKT_GAMEENGINE_H
