#include "inheritance.h"

Account::Account(string num, int bal) : acc_num(num), balance(bal) {}

string Account::getNum()
{
    return acc_num;
}

int Account::getBalance()
{
    return balance;
}

void Account::setNum(string num)
{
    acc_num = num;
}

void Account::setBalance(int bal)
{
    balance = bal;
}

void Account::showInfo()
{
    cout << "���� ��ȣ : " << getNum() << endl;
    cout << "���� �ܾ� : " << getBalance() << endl;
}

KBAccount::KBAccount(string num, int bal, int limit)
    : Account(num, bal), transferLimit(limit) {}

int KBAccount::getLimit()
{
    return transferLimit;
}

void KBAccount::setLimit(int limit)
{
    transferLimit = limit;
}

void KBAccount::showInfo()
{
    Account::showInfo();
    cout << "��ü �ѵ� : " << getLimit() << endl;
}

void inheritanceTestA()
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