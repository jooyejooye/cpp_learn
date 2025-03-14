#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = { 6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0 };	 // 7 , 9 , 11 , 13 , 15 ,

	// v2 �� �� ª���� run time error : ������ å��

	std::transform(
		v1.begin(), v1.end(),					// 1. �� ������ ��Ҹ�
		v2.begin(),								// 2. �� ������ ��ҿ� �Բ�  // ���� ���������ؼ� 2����� ù �κи� �ֱ�
		v3.begin(),								// 4. �̰��� �־��
		[](int a, int b) {return a + b; } ) ;	// 3. �� �Լ��� ������ ��ȯ����
	

	for (auto e : v3)
		std::cout << e << " , ";
}