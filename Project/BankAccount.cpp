#include <iostream>
#include "BankAccount.h"

using namespace std;

//口座名義人と初期残高を設定して口座を作成する
BankAccount::BankAccount(const string& holder, double initialBalance)
    : accountHolder(holder), balance(initialBalance)
{
}

//現在の口座残高を返す
double BankAccount::getBalance() const
{
    return balance;
}

//指定した金額を預け入れる
void BankAccount::deposit(double amount)
{
    //預け入れる金額が0より大きい場合だけ処理する
    if (amount > 0)
    {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }
    else
    {
        //0以下の金額が指定された場合はエラーを表示する
        cout << "Invalid deposit amount.\n";
    }
}

//指定した金額を引き出す
void BankAccount::withdraw(double amount)
{
    //金額が0より大きく、残高以下の場合だけ引き出す
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << "\n";
    }
    else
    {
        //引き出し金額が不正、または残高不足の場合
        cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}

//口座名義人と現在の残高を表示する
void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}