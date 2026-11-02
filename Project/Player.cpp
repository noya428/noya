#include <iostream>
#include "Player.h"
#include "Enemy.h"
using namespace std;

Player::Player() : Character(100)
{
}

void Player::Attack(Enemy& enemy)
{
    cout << "プレイヤーの攻撃" << endl;
    enemy.TakeDamage(30);
}

void Player::Defend()
{
    cout << "プレイヤーは防御した" << endl;
}

void Player::Heal()
{
    hp += 20;

    if (hp > 100)
    {
        hp = 100;
    }

    cout << "プレイヤーは回復魔法を使った" << endl;
}
