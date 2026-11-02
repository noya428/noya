#include <iostream>
#include "Character.h"
using namespace std;

Character::Character(int initialHP)
{
    hp = initialHP;
}

int Character::GetHP()
{
    return hp;
}

void Character::TakeDamage(int damage)
{
    hp -= damage;

    if (hp < 0)
    {
        hp = 0;
    }
}
