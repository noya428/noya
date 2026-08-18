#include <iostream>
using namespace std;

// ダメージ関数
void Damage(int* hp)
{
    *hp -= 20;
}

// 回復関数
void Heal(int* hp)
{
    *hp += 30;
}

int main()
{
    // HPはmain関数で管理
    int hp = 100;

    // HPのアドレスを渡してダメージ
    Damage(&hp);

    // HPのアドレスを渡して回復
    Heal(&hp);

    // 最終的なHPを表示
    cout << "Final HP:" << hp << endl;

    return 0;
}