#include <iostream>
#include "Enemy.h"
#include "Player.h"
using namespace std;

Enemy::Enemy() : Character(100)
{
}

void Enemy::Defend()
{
    cout << "“G‚Íg‚ðŽç‚Á‚½" << endl;
}

void Enemy::Attack(Player& player, bool isDefending)
{
    int damage = 20;

    if (isDefending)
    {
        damage = 10;
    }

    cout << "“G‚ÌUŒ‚" << endl;

    player.TakeDamage(damage);
}
