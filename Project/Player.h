#pragma once
#include "Character.h"

class Player : public Character
{
public:
    Player();

    void Attack(class Enemy& enemy);
    void Defend();
    void Heal();
};
