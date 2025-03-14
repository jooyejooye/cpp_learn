// 8_반복문 44 page
#include <iostream>
#include<ranges> // c++20  부터 지원하는 헤더
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	// c+11 의 새로운 for 문 > range for
	//for (auto e : std::views::reverse(x) ) // 뒤집어서
	// for (auto e : std::views::take(x, 5)) // 앞의 5개만
	for (auto e : std::views::stride(x, 2)) // 2개씩 step
	{
		std::cout << e << std::endl;
	}
		
}
