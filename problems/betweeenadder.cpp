
#include <iostream>

int main(void)
{
	int num1, num2;
	int result=0;
	std::cout<<"숫자 입력 : ";
	std::cin>>num1>>num2;

	if(val1<val2)
	{
		for (int i = num1+1; i < num2; ++i)
		{
			result += i;
		}
	}

	std::cout<<"두 숫자 사이의 정수 합 : "<<result<<std<<endl;
	return 0;
}