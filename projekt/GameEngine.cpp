//
// Created by root on 18.11.2022.
//


#include <conio.h>
#include "GameEngine.h"
#include "iostream"
#include "Logic/CommandProcessor.h"

using namespace std;

void GameEngine::run() {
    bool run = true;
    int command = 0;
    int input = 0;

    //Nekonecna smycka, ktera
    while(run){
        //Zaeviduje input
        input = getch();
        //Posle ho na vyhodnoceni
        command = InputHandler::getCommandForInput(input);
        //Pokud je to neco, co nas zajima, posle do dalsi metody
        if(command != CommandProcessor::IGNORE){
            handleAction(command);
        }
    }
}



void GameEngine::handleAction(int action) {
    //pošli command
    InterfaceRenderer::debugMessage(to_string(action));

    //update game state tim ze ho protahnu prese command processor a ulozim zpet novy state

    //vykreslim znovu kompletne cely game state
}
