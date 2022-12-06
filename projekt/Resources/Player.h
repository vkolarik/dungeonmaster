//
// Created by root on 28.11.2022.
//

#ifndef PROJEKT_PLAYER_H
#define PROJEKT_PLAYER_H

#include <vector>

class Player {
private:
    int m_location_x, m_location_y, m_active_weapon = -1;
    float m_health = 100;
    float m_damage = 50;
    //std::vector<Weapon*> m_weapons;
public:
    int deleteAfterTest = 0;
    Player(int x, int y);
    Player();
    int getLocationX();
    int getLocationY();
    float getHealth();
    float getDamage();
    void setHealth(float health);
    void setDamage(float damage);
    void setLocationX(int x);
    void setLocationY(int y);
    char render();
};


#endif //PROJEKT_PLAYER_H
