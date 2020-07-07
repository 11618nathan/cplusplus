
#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;
	return 0;
}

// 디폴트 값 - 기본적으로 설정되어 있는 값
// 선언된 매개변수의 수보다 적은 수의 인자전달이 가능
// 함수의 원형을 별도로 선언하는 경우, 매개변수의 디폴트 값은 함수의 원형 선언에만 위치.
// 함수의 전달된느 인자가 왼쪽에서부터 오른쪽으로 채워짐.
