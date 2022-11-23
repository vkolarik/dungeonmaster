//
// Created by root on 18.11.2022.
//

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_E 101
#define KEY_SPACE 32

#include "InputHandler.h"
#include "InterfaceRenderer.h"
#include "..\Logic\CommandProcessor.h"


int InputHandler::getCommandForInput(int ascii) {
    switch (ascii) {
        case KEY_UP:
            InterfaceRenderer::debugMessage("up");
            return CommandProcessor::UP;
            break;
        case KEY_DOWN:
            InterfaceRenderer::debugMessage("down");
            return CommandProcessor::DOWN;
            break;
        case KEY_LEFT:
            InterfaceRenderer::debugMessage("left");
            return CommandProcessor::LEFT;
            break;
        case KEY_RIGHT:
            InterfaceRenderer::debugMessage("right");
            return CommandProcessor::RIGHT;
            break;
        case KEY_SPACE:
            InterfaceRenderer::debugMessage("space");
            return CommandProcessor::SPACE;
            break;
        case KEY_E:
            //Vypne hru
            InterfaceRenderer::debugMessage("e");
            return CommandProcessor::EXIT;
            break;
        default:
            return CommandProcessor::IGNORED;
            break;
    }


}