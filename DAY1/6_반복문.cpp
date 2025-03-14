// 8_반복문 44 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;

	// c+11 의 새로운 for 문 > range for
	for (auto e : x)
		std::cout << e << std::endl;
}
