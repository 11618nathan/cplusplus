
#include <iostream>

void func(void)
{
	std::cout<<"function(void) called"<<std::endl;
}

void func(char c)
{
	std::cout<<"fuction(char c) called"<<std::endl;
}

int main(void)
{
	func();
	func('func');
}
