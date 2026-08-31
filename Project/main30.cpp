#include "BankAccount.h"

int main()
{
    //Aliceさんの口座を作成し、初期残高を5000円にする
    BankAccount account("Alice", 5000.0);

    //口座情報を表示する
    account.displayAccountInfo();

    //1000円を預け入れる
    account.deposit(1000.0);

    //2000円を引き出す
    account.withdraw(2000.0);

    //残高が不足しているため引き出しに失敗する
    account.withdraw(5000.0);

    //最後の口座情報を表示する
    account.displayAccountInfo();

    return 0;
}