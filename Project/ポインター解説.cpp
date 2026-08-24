#include <iostream>
using namespace std;

int main(void)
{
    int a = 0;//変数aを宣言

    int* p = &a;//ポインターpを宣言

    cout << "aの初期値: " << a << endl;//aの初期値

    *p = 10;//ポインターpを使って、aの値を10に変更

    cout << "aの変更後の値: " << a << endl;//変更後のaの値を表示

    return 0;
}