//
// Created by root on 28.11.2022.
//

#include "Player.h"

Player::Player(int x, int y) {
    m_location_x = x;
    m_location_y = y;
}

Player::Player() {}

int Player::getLocationX() {
    return m_location_x;
}

int Player::getLocationY() {
    return m_location_y;
}

float Player::getHealth() {
    return m_health;
}

float Player::getDamage() {
    return m_damage;
}

char Player::render() {
    return 'H';
}

void Player::setLocationX(int x) {
    m_location_x = x;
}

void Player::setLocationY(int y) {
    m_location_y = y;
}

void Player::setHealth(float health) {
    m_health = health;
}

void Player::setDamage(float damage) {
    m_damage = damage;
}
