//
// Created by root on 28.11.2022.
//

#ifndef PROJEKT_PLAYER_H
#define PROJEKT_PLAYER_H


class Player {
private:
    int m_location_x, m_location_y;

public:
    int deleteAfterTest = 0;
    Player(int x, int y);
    int getLocationX();
    int getLocationY();
    void setLocationX(int x);
    void setLocationY(int y);
    char render();
};


#endif //PROJEKT_PLAYER_H
