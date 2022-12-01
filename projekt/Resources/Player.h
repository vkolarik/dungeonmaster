//
// Created by root on 28.11.2022.
//

#ifndef PROJEKT_PLAYER_H
#define PROJEKT_PLAYER_H

class Player {
private:
    int m_location_x, m_location_y;
    float m_health = 100;
    float m_damage = 50;
public:
    int deleteAfterTest = 0;
    Player(int x, int y);
    Player();
    int getLocationX();
    int getLocationY();
    float getHeaalth();
    float getDamage();
    void setLocationX(int x);
    void setLocationY(int y);
    char render();
};


#endif //PROJEKT_PLAYER_H
