#include <iostream>
#include "GameEngine.h"


int main() {

    //Inicializace hlavni tridy, ktera se stara o vsechno ostatni
    GameEngine* g = new GameEngine();
    g->run();

    return 0;
}
