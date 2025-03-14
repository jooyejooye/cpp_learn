#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin();  // �����̳��� 1st ��Ҹ� ����Ű�� �ݺ���
	auto p2 = s.end();   // p2 �� �������� �ƴ϶�, ������ "����" ��Ҹ� ����Ű�� �ݺ���

	*p1 = 11;	// ok
//	*p2 = 20;	// runtime error, 
					// �׻� .end() �� ���� �ݺ��ڴ� * ���� �ϸ� �ȵ˴ϴ�.

	// p1�� �̵��ؼ� ��ȸ �� ��, �������� �����ߴ��� Ȯ���ϴ� �뵵�θ� ���
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;

	}
}