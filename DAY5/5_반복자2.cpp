// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. �ݺ����� ��Ȯ�� Ÿ��
	// => �׷��� c++ ���Ķ�� �Ʒ�ó�� ���� ������
	// => �Ʒ� ó�� container ��ü �� �ڵ� ���� �ؾ� �մϴ�
	std::list<int>::iterator p2 = s.begin();

	// 2. auto ����ϼ���
	auto p1 = s.begin(); 
	
	
}

namespace std
{
	class list_iterator
	{

	};
	template<typename T>
	class list
	{
	public:
		using iterator = list_iterator;
	};
}
