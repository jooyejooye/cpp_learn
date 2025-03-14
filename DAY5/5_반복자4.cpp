// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳� ��� ��� �����ϴ� ���
	// 1. range - for ��, ��� �����̳� ����, C++11 ����
	for (auto e : c)
	{
		std::cout << e << std::endl;
	}
	auto first = c.begin();
	auto last = c.end();

	while(first != last)
	{
		auto e = *first;  // 98�� auto �� �ȵ�...
		std::cout << e << std::endl;
	}

	// 2. �ݺ��� ���, ��� �����̳� ��밡��

	for (int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << std::endl; // c �� list ��� ����, vector��� �� �ڵ�� ����
	}

	// 3. [] ������ ��� - vector, deque�� ����, list �ȵ�
}

