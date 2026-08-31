#pragma once
#include <string>

//銀行口座を管理するクラス
class BankAccount
{
private:
    //口座名義人の名前
    std::string accountHolder;

    //現在の口座残高
    double balance;

public:
    //口座名義人と初期残高を指定して口座を作成する
    BankAccount(const std::string& holder, double initialBalance);

    //現在の残高を取得する
    double getBalance() const;

    //指定した金額を口座に預け入れる
    void deposit(double amount);

    //指定した金額を口座から引き出す
    void withdraw(double amount);

    //口座名義人と現在の残高を表示する
    void displayAccountInfo() const;
};