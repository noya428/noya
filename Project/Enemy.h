#pragma once
#include "Character.h"

class Enemy : public Character
{
public:
    Enemy();

    void Defend();
    void Attack(class Player& player, bool isDefending);
};
