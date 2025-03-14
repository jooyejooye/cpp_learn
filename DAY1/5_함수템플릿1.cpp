#include <iostream>
/*
int Add(int a, int b)
{
	return a + b;
}
*/
template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1, 2 ) << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;

	//std::cout << Add(1, 2.2) << std::endl; // 오류 > T TYPE 결정 불가: int double?
	std::cout << Add<double>(1, 2.2) << std::endl; // T TYPE 선언 미리 해두면 ERROR 아님
}

