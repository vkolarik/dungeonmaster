//
// Created by root on 24.11.2022.
//

#ifndef PROJEKT_GAMETILE_H
#define PROJEKT_GAMETILE_H


#include <string>

class GameTile {
protected:
    bool m_is_interactable;
    std::string m_description;
public:
    GameTile(bool isInteractable, std::string description);
    virtual char render() = 0;
    bool isInteractable();
};


#endif //PROJEKT_GAMETILE_H
