#pragma once
#include <vector>
#include <iostream>
using namespace std;

// 다음 클래스는 은행 계좌 정보를 담을 수 있도록 정의되어 있는 Account 클래스이다.
class Account
{
private:
    string acc_num; // 계좌 번호
    int balance; // 계좌 잔액

public:
    Account(string num, int bal);
    string getNum();
    int getBalance();
    void setNum(string num);
    void setBalance(int bal);
    virtual void showInfo();
};

class KBAccount : public Account
{
private:
    int transferLimit; // 이체 한도

public:
    KBAccount(string num, int bal, int limit);
    int getLimit();
    void setLimit(int limit);
    void showInfo() override;
};

void inheritanceTestA();