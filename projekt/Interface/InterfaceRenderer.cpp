//
// Created by root on 18.11.2022.
//

#include "InterfaceRenderer.h"
#include "iostream"
#include "../GameEngine.h"

void InterfaceRenderer::debugMessage(std::string message) {
    if (GameEngine::DEBUG){
        std::cout << message << std::endl;
    }
}