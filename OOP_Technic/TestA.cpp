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
    Account(string num, int bal) : acc_num(num), balance(bal)
    {
        acc_num = num;
        balance = bal;
    }

    string getNum()
    {
        return acc_num;
    }

    int getBalance()
    {
        return balance;
    }

    void setNum(string num)
    {
        acc_num = num;
    }

    void setBalance(int bal)
    {
        balance = bal;
    }

    virtual void showInfo()
    {
        cout << "계좌 번호 : " << getNum() << endl;
        cout << "계좌 잔액 : " << getBalance() << endl;
    }
};

class KBAccount : public Account
{
private:
    int transferLimit; // 이체 한도

public:
    KBAccount(string num, int bal, int limit) : Account(num, bal), transferLimit(limit) {};

    int getLimit()
    {
        return transferLimit;
    }

    void setLimit(int limit)
    {
        transferLimit = limit;
    }

    void showInfo() override
    {
        this->Account::showInfo();
        cout << "이체 한도 : " << getLimit() << endl;
    }
};

int main()
{
    vector<KBAccount> accounts;

    int N;
    cout << "이용자의 수를 입력하세요. (1 이상의 정수를 입력해야 합니다)" << endl;
    cin >> N;

    if (N >= 1)
    {
        for (int i = 0; i < N; i++)
        {
            string num;
            int bal, limit;

            cout << endl << i + 1 << "번 이용자의 정보를 입력합니다." << endl;

            // input
            cout << "계좌 번호를 입력하세요. ";
            cin >> num;

            cout << "잔액을 입력하세요. ";
            cin >> bal;

            cout << "이체 한도를 입력하세요. ";
            cin >> limit;

            KBAccount account(num, bal, limit);
            accounts.push_back(account);
        }

        for (int i = 0; i < accounts.size(); i++)
        {
            cout << endl << i + 1 << "번 이용자의 정보를 출력합니다." << endl;

            // output
            accounts[i].showInfo();
        }
    }
    else
        cout << "부적절한 입력값입니다." << endl;
}