#pragma once
#include <vector>
#include <iostream>
using namespace std;

// ���� Ŭ������ ���� ���� ������ ���� �� �ֵ��� ���ǵǾ� �ִ� Account Ŭ�����̴�.
class Account
{
private:
    string acc_num; // ���� ��ȣ
    int balance; // ���� �ܾ�

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
    int transferLimit; // ��ü �ѵ�

public:
    KBAccount(string num, int bal, int limit);
    int getLimit();
    void setLimit(int limit);
    void showInfo() override;
};

void inheritanceTestA();