#include "macro.h"

void PI::showPI()
{
	cout << "���̴� " << setprecision(11) << PIAmount << endl << endl;
}

void Numbers::setNumbers()
{
	cout << "�迭�� �������մϴ�." << endl;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		cout << i + 1 << "��° ���ڸ� �Է��ϼ���. ";
		cin >> Numbers::numbers[i];
	}

	cout << endl;
}

void Numbers::getNumbers()
{
	cout << "�迭�� ������ ����մϴ�." << endl;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		cout << i + 1 << "��° ���ڴ� " << numbers[i] << endl;
	}
}

Calculator::Calculator()
{
	cout << "���⸦ �۵��մϴ�. �� ���ڸ� �Է����ּ���. ";
	cin >> x >> y;
	
	cout << "� ������ �ʿ��Ѱ���? (1 : ���ϱ� / 2 : ���� / 3 : ���ϱ� / 4 : ������) ";
	cin >> input;

	if (input < 1 || input > 4)
		cout << "�Է°��� �߸��Ǿ����ϴ�." << endl;
	else
	{
		cout << "�� �� " << x << ", " << y;

		switch (input)
		{
			case 1:
				answer = SUM(x, y);
				cout << "�� ���� ";
				break;

			case 2:
				answer = SUB(x, y);
				cout << "�� ���� ";
				break;

			case 3:
				answer = MUL(x, y);
				cout << "�� ���� ";
				break;

			case 4:
				answer = DIV(x, y);
				cout << "�� ���� ���� ";
				break;
		}

		cout << answer << "�Դϴ�." << endl;
	}
}