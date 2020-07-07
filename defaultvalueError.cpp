
#include <iostream>

void Adder(int num1 = 1, int num2 = 2);

int main(void)
{
	std::cout<<Adder() << std::end;
	std::cout << Adder(5) << std::end;
	std::cout << Adder(3, 5) << std::end;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}
