#include <iostream>

// 인자 2개가 서로 다른 타입이 될 수 있도록 TYPE 인자 2개 받는 템플릿
template<typename T1, typename T2>

// ? 는 어떤거 넣을까
/*
? Add(T1 a, T2 b)
{
	return a + b;
}
*/ 

int main()
{
	std::cout << Add<int, double>(1, 2.2) << std::endl; // T1, T2 : TYPE 선언 미리 해두면 ERROR 아님
	std::cout << Add(1, 2.2) << std::endl; 
}