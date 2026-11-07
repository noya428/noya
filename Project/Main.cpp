#include <iostream>
#include "Player.h"
#include "Enemy.h"

using namespace std;

int main()
{
    Player player;
    Enemy enemy;

    bool isDefending = false;

    while (player.GetHP() > 0 && enemy.GetHP() > 0)
    {
        int command;

        cout << "\n===== コマンドバトル =====" << endl;
        cout << "プレイヤーHP：" << player.GetHP() << endl;
        cout << "敵HP：" << enemy.GetHP() << endl;

        cout << "\n1：攻撃" << endl;
        cout << "2：防御" << endl;
        cout << "3：回復" << endl;
        cout << "行動を選択してください：";

        cin >> command;

        isDefending = false;

        switch (command)
        {
        case 1:
            player.Attack(enemy);
            enemy.Defend();
            break;

        case 2:
            player.Defend();
            isDefending = true;
            enemy.Attack(player, isDefending);
            break;

        case 3:
            player.Heal();
            enemy.Attack(player, isDefending);
            break;

        default:
            cout << "正しい数字を入力してください。" << endl;
            continue;
        }
    }

    // 勝敗判定
    cout << "\n===== ゲーム終了 =====" << endl;

    if (player.GetHP() <= 0)
    {
        cout << "死んでしまった" << endl;
    }
    else
    {
        cout << "プレイヤーの勝利" << endl;
    }

    return 0;
}
