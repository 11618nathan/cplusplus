
#include <iostream>

int func(int num)
{
	num--;
	return num;
}

int func(int num1, int num2)
{
	return num1 + num2;
}

int main(void)
{
	func(1);
	func(2, 3);
	return 0;
}



// 함수 오버로딩(Function Overloading) - 함수 호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구부닝 가능하기 때문.
// 함수의 이름, 매개변수의 선언을 통해 호출할 함수를 찾는다.
// 매개변수의 자료형이 다를 경우도 가능.
// 함수 반환형은 함수를 구분하는 기준이 될 수 없다.
