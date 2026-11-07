#pragma once
#include "Character.h"
#include <iostream>
using namespace std;

class Player : public Character
class Player
{
private:
    int total;      // 合計点
    int cards[11];  // 手札
    int count;      // 手札の枚数

public:
    Player();
    Player()
    {
        total = 0;
        count = 0;
    }

    // カードを追加
    void AddCard(int card)
    {
        cards[count] = card;
        count++;
        total += card;
    }

    // 合計点を取得
    int GetTotal()
    {
        return total;
    }

    // 手札を表示
    void ShowCards()
    {
        cout << "Player：";

        for (int i = 0; i < count; i++)
        {
            cout << cards[i] << " ";
        }

    void Attack(class Enemy& enemy);
    void Defend();
    void Heal();
        cout << "\n合計：" << total << endl;
    }
};
