// 8_�ݺ��� 44 page
#include <iostream>
#include<ranges> // c++20  ���� �����ϴ� ���
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	// c+11 �� ���ο� for �� > range for
	//for (auto e : std::views::reverse(x) ) // �����
	// for (auto e : std::views::take(x, 5)) // ���� 5����
	for (auto e : std::views::stride(x, 2)) // 2���� step
	{
		std::cout << e << std::endl;
	}
		
}
