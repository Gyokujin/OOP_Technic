#pragma once
#include <iomanip>
#include <iostream>
using namespace std;

// define : ��ó���� ���ù����� ��ũ�θ� �����ϴ� �� ���Ǵ� Ű����
// ��ũ�� : define�� ����Ͽ� ���ǵ� �ڵ� ���� �Ǵ� ���, ������ �̸� ���ǵ� ���� �Ұ����� �������� �����ϸ� �ȴ�
#define PIAmount 3.14159265359 // ����� ����
#define MAX_SIZE 5 // �迭�� ũ�⸦ ���ϱ� ���� ��� ����(c++���� �迭�� ũ��� ����� �����ϴ�)

#define SUM(x, y) x + y // ��ó����� ������ �Լ��� �����ϴ� �͵� �����ϴ�
#define SUB(x, y) x - y
#define MUL(x, y) x * y
#define DIV(x, y) x / y

class PI
{
public:
	void showPI();
};

class Numbers
{
public:
	int numbers[MAX_SIZE];
	void setNumbers();
	void getNumbers();
};

class Calculator
{
private:
	int x;
	int y;
	int input;
	int answer = 0;

public:
	Calculator();
};