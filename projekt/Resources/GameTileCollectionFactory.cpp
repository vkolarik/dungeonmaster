//
// Created by root on 28.11.2022.
//

#include "GameTileCollectionFactory.h"
#include "../GameEngine.h"
#include "Tiles/Wall.h"
#include "Tiles/FreeSpace.h"
#include "Tiles/CountDown.h"
#include "Tiles/PotionTile.h"
#include "Tiles/WeaponTile.h"

void GameTileCollectionFactory::loadBlueprints() {
    //0  1  2
    //3  4  5
    //6  7  8


    //-----------------0--------------------
    m_blueprints[0] =
            "XXXXXXXXXXXXXXXXXXXX" //1
            "X                  X" //2
            "X  XXXXXXXX        X" //3
            "X   XXXXXX         X" //4
            "X    XXXX          X" //5
            "X                  X" //6
            "XXX    X           X" //7
            "X       XXXX       X" //8
            "X        XXXX      X" //9
            "X             X     " //10
            "X    XXX            " //11
            "X           XXX    X" //12
            "X   XXX     XXX    X" //13
            "X   X              X" //14
            "X   X      XXX   XXX" //15
            "X   XX  XXXXXXXX   X" //16
            "X   XXX   XXXXXX   X" //17
            "X   XXXXX  XXXXX   X" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20

    ;
    //-----------------1--------------------
    m_blueprints[1] =
            "XXXXXXXXXXXXXXXXXXXX" //1
            "X                  X" //2
            "X  XX              X" //3
            "X                  X" //4
            "X                  X" //5
            "X                  X" //6
            "X                  X" //7
            "X                  X" //8
            "X                  X" //9
            "                    " //10
            "                    " //11
            "X                  X" //12
            "X                  X" //13
            "X                  X" //14
            "X                  X" //15
            "X                  X" //16
            "X                  X" //17
            "X                  X" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------2--------------------
    m_blueprints[2] =
            "XXXXXXXXXXXXXXXXXXXX" //1
            "X                  X" //2
            "X XXX              X" //3
            "X                  X" //4
            "X                  X" //5
            "X                  X" //6
            "X                  X" //7
            "X                  X" //8
            "X                  X" //9
            "                   X" //10
            "                   X" //11
            "X                  X" //12
            "X                  X" //13
            "X                  X" //14
            "X                  X" //15
            "X                  X" //16
            "X                  X" //17
            "X                  X" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------3--------------------
    m_blueprints[3] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X                  X" //2
            "X  XXXX            X" //3
            "X                  X" //4
            "X                  X" //5
            "X                  X" //6
            "X                  X" //7
            "X                  X" //8
            "X                  X" //9
            "X                   " //10
            "X                   " //11
            "X                  X" //12
            "X                  X" //13
            "X                  X" //14
            "X                  X" //15
            "X                  X" //16
            "X                  X" //17
            "X                  X" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------4--------------------
    m_blueprints[4] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X     S       Y    X" //2
            "X  XXXXX           X" //3
            "X            C     X" //4
            "X            P     X" //5
            "X       U          X" //6
            "X                  X" //7
            "X   C              X" //8
            "X          A       X" //9
            "     K              " //10
            "          CCC       " //11
            "X                  X" //12
            "X         O        X" //13
            "X             C    X" //14
            "X     W            X" //15
            "X                  X" //16
            "X          C       X" //17
            "X      C           X" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------5--------------------
    m_blueprints[5] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X                  X" //2
            "X  XXXXXX          X" //3
            "X                  X" //4
            "X                  X" //5
            "X                  X" //6
            "X                  X" //7
            "X                  X" //8
            "X                  X" //9
            "                   X" //10
            "                   X" //11
            "X                  X" //12
            "X                  X" //13
            "X                  X" //14
            "X                  X" //15
            "X                  X" //16
            "X                  X" //17
            "X                  X" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------6--------------------
    m_blueprints[6] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X                  X" //2
            "X  XXXXXXX         X" //3
            "X                  X" //4
            "X                  X" //5
            "X                  X" //6
            "X                  X" //7
            "X                  X" //8
            "X                  X" //9
            "X                   " //10
            "X                   " //11
            "X                  X" //12
            "X                  X" //13
            "X                  X" //14
            "X                  X" //15
            "X                  X" //16
            "X                  X" //17
            "X                  X" //18
            "X                  X" //19
            "XXXXXXXXXXXXXXXXXXXX"; //20
    //-----------------7--------------------
    m_blueprints[7] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X                  X" //2
            "X  XXXXXXXX        X" //3
            "X                  X" //4
            "X                  X" //5
            "X                  X" //6
            "X                  X" //7
            "X                  X" //8
            "X                  X" //9
            "                    " //10
            "                    " //11
            "X                  X" //12
            "X                  X" //13
            "X                  X" //14
            "X                  X" //15
            "X                  X" //16
            "X                  X" //17
            "X                  X" //18
            "X                  X" //19
            "XXXXXXXXXXXXXXXXXXXX"; //20
    //-----------------8--------------------
    m_blueprints[8] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X                  X" //2
            "X  XXXXXXXXX       X" //3
            "X                  X" //4
            "X                  X" //5
            "X                  X" //6
            "X                  X" //7
            "X                  X" //8
            "X                  X" //9
            "                   X" //10
            "                   X" //11
            "X                  X" //12
            "X                  X" //13
            "X                  X" //14
            "X                  X" //15
            "X                  X" //16
            "X                  X" //17
            "X                  X" //18
            "X                  X" //19
            "XXXXXXXXXXXXXXXXXXXX"; //20
}

GameTileCollectionFactory::GameTileCollectionFactory() {
    loadBlueprints();
}

GameTileCollection *GameTileCollectionFactory::createTileCollectionFromBlueprint(int index) {

    std::vector<std::vector<GameTile*>> collection;
    std::vector<GameTile*> pom;
    std::string shortcut;
    for (int i = 0; i < GameEngine::GAME_SIZE; ++i) {
        pom.clear();
        for (int j = 0; j < GameEngine::GAME_SIZE; ++j) {
            shortcut = m_blueprints[index][i+(j*GameEngine::GAME_SIZE)];
            pom.push_back(getTileForShortcut(shortcut));
        }
        collection.push_back(pom);
    }

    return new GameTileCollection(collection);
}

GameTile *GameTileCollectionFactory::getTileForShortcut(std::string shortcut) {
    // pismena, ktore su uz zabrane: A, C, K, O, P, S, U, W, X, Y

    //Wall
    if(shortcut == "X") return new Wall();
    if(shortcut == "C") return new CountDown();

    //Potions
    if(shortcut == "O") return new PotionTile("Obelix mix", 10);
    if(shortcut == "P") return new PotionTile("Uber health potion", 15);
    if(shortcut == "U") return new PotionTile("Vodka", -5);
    if(shortcut == "S") return new PotionTile("Bull's fire", 50);
    if(shortcut == "Y") return new PotionTile("Sui juice", 15);

    //WeaponTile
    if(shortcut == "W") return new WeaponTile("Thors hammer", 10);
    if(shortcut == "K") return new WeaponTile("Yo mama knife", 15);
    if(shortcut == "A") return new WeaponTile("Frost Axe", 12);
    return new FreeSpace();
}




