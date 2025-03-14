// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
// stl::find	: �� �˻�, 3��° ���ڷ� ��
// stl:find_if	: ���� �˻�, 3���� ���ڷ� �Լ�

// ���� �Լ�	: ���ڰ� 1���� �Լ�
// ���� �Լ�	: ���ڰ� 2���� �Լ�

// ������(predicate) : Bool�� ��ȯ�ϴ� �Լ�
// find_If �� 3��° ���ڴ� "���� ������ (unary predicate) " �Դϴ�
bool foo(int n)
{
	return n % 3 == 0;
}

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// �־��� �������� ó�� ������ "3" �� ã�ƶ�
	auto ret1 = std::find(v.begin(), v.end(), 3); 
	auto ret2 = std::find_if(v.begin(), v.end(), foo);  // foo( �Ѱ�- �����Լ�) -> bool return : predicator

	if (ret2 == v.end())
	{
		
	}
	else
	{
		std::cout << *ret2 << std::endl;
	}
}