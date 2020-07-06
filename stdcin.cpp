
#include <iostream>

int main(void)
{
	int val1;
	std::cout<<"num1 : ";
	std::cin>>val1;

	int val2;
	std::cout<<"num2 : ";
	std::cin>>val2;


	int result=val1+val2;
	std::cout<<"result : "<<result<<std::endl;
	return 0;

	// #include <iostream> 헤더파일 선언문 필요
	// std::cin, >> 연산자 필요
	// std::cin>>'변수'
	// 데이터의 입력은 별도의 입력포맷을 지정x
	
}