// 5_�ݺ���1
// => C++ �Ӹ� �ƴ϶� ���� ��� �� �ִ� ����


#include <iostream>
#include <vector>
#include <list>

// 192 page ~
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// �迭�� ���� �ּҸ� �˸� ��� ��Ҹ� �����Ҽ� �ֽ��ϴ�
	// => �迭�� ���ӵ� �޸� �̹Ƿ�
	int* p1 = x;


	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	// STL �� ��� �����̳ʴ� �ݺ��ڸ� ������ ++ �������� ��� ��� ���� ���� 

	auto p2 = s.begin();
	// p2 �� �ݺ��� (iterator) �Դϴ� => ������ �����Ϳ� ����
	// p2 : ��ü

	++p2; // p2.operator++ ( ) >> �Լ� ȣ��
	std::cout << *p2 << std::endl;

	p2.operator++();
	std::cout << *p2 << std::endl;

}