
#include <iostream>

inline int square(int num)
{
	return num * num;
}

int main(void)
{
	std::cout << square(5) << std::endl;
	std::cout << square(12) << std::endl;
	return 0;
}

// 인라인 함수 - 매크로 함수는 정의하기가 복잡, 일반 함수처럼 정의
// inline을 이용한 함수의 인라인화는 컴파일러에 의해서 처리
// 매크로를 이용한 함수의 인라인화는 전처리기에 의해 처리.
