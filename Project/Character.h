#pragma once

class Character
{
protected:
    int hp;

public:
    Character(int initialHP);

    int GetHP();
    void TakeDamage(int damage);
};
