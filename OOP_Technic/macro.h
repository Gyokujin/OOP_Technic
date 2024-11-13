#pragma once
#include <iomanip>
#include <iostream>
using namespace std;

// define : 전처리기 지시문으로 매크로를 정의하는 데 사용되는 키워드
// 매크로 : define을 사용하여 정의된 코드 조각 또는 상수, 사전에 미리 정의된 변경 불가능한 내용으로 이해하면 된다
#define PIAmount 3.14159265359 // 상수의 정의
#define MAX_SIZE 5 // 배열의 크기를 정하기 위해 상수 선언(c++에서 배열의 크기는 상수만 가능하다)

#define SUM(x, y) x + y // 전처리기로 간단한 함수를 정의하는 것도 가능하다
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