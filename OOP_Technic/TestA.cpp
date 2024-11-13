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
        cout << "���� ��ȣ : " << getNum() << endl;
        cout << "���� �ܾ� : " << getBalance() << endl;
    }
};

class KBAccount : public Account
{
private:
    int transferLimit; // ��ü �ѵ�

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
        cout << "��ü �ѵ� : " << getLimit() << endl;
    }
};

int main()
{
    vector<KBAccount> accounts;

    int N;
    cout << "�̿����� ���� �Է��ϼ���. (1 �̻��� ������ �Է��ؾ� �մϴ�)" << endl;
    cin >> N;

    if (N >= 1)
    {
        for (int i = 0; i < N; i++)
        {
            string num;
            int bal, limit;

            cout << endl << i + 1 << "�� �̿����� ������ �Է��մϴ�." << endl;

            // input
            cout << "���� ��ȣ�� �Է��ϼ���. ";
            cin >> num;

            cout << "�ܾ��� �Է��ϼ���. ";
            cin >> bal;

            cout << "��ü �ѵ��� �Է��ϼ���. ";
            cin >> limit;

            KBAccount account(num, bal, limit);
            accounts.push_back(account);
        }

        for (int i = 0; i < accounts.size(); i++)
        {
            cout << endl << i + 1 << "�� �̿����� ������ ����մϴ�." << endl;

            // output
            accounts[i].showInfo();
        }
    }
    else
        cout << "�������� �Է°��Դϴ�." << endl;
}