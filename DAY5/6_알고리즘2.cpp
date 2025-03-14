// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


int main()
{
	std::vector<int> v = { 1,2,3,4,3,6,7,3,9,10 };

	// ������ �˰����� std::reverse() �Դϴ�.
	std::reverse(v.begin(), v.end());

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// ���ǿ� �´� ��Ҹ� �����ϴ� �˰����� std::replace() �Դϴ�.
	// v ���� 3�� -1�� ������ ������.  
	// ?
	std::replace(v.begin(), v.end(),3,-1);

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;
}