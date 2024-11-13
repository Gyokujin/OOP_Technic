#include "macro.h"

void PI::showPI()
{
	cout << "파이는 " << setprecision(11) << PIAmount << endl << endl;
}

void Numbers::setNumbers()
{
	cout << "배열을 재정의합니다." << endl;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		cout << i + 1 << "번째 숫자를 입력하세요. ";
		cin >> Numbers::numbers[i];
	}

	cout << endl;
}

void Numbers::getNumbers()
{
	cout << "배열의 값들을 출력합니다." << endl;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		cout << i + 1 << "번째 숫자는 " << numbers[i] << endl;
	}
}

Calculator::Calculator()
{
	cout << "계산기를 작동합니다. 두 숫자를 입력해주세요. ";
	cin >> x >> y;
	
	cout << "어떤 연산이 필요한가요? (1 : 더하기 / 2 : 빼기 / 3 : 곱하기 / 4 : 나누기) ";
	cin >> input;

	if (input < 1 || input > 4)
		cout << "입력값이 잘못되었습니다." << endl;
	else
	{
		cout << "두 수 " << x << ", " << y;

		switch (input)
		{
			case 1:
				answer = SUM(x, y);
				cout << "의 합은 ";
				break;

			case 2:
				answer = SUB(x, y);
				cout << "의 차는 ";
				break;

			case 3:
				answer = MUL(x, y);
				cout << "의 곱은 ";
				break;

			case 4:
				answer = DIV(x, y);
				cout << "를 나눈 몫은 ";
				break;
		}

		cout << answer << "입니다." << endl;
	}
}