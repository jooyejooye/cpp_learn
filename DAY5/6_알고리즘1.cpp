// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 200 page ~
int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳ʿ��� 3�� ã�� �ʹ�.
	// ��� 1. ����Լ� find�� ��������.
	// ���� : ����ϱ� ����.!
	// ���� : ��� �����̳ʿ� find ��� �Լ��� ������ �Ѵ�. 
//	s.find(3);


	// ��� 2. find �� �Ϲ� �Լ� ���ø����� ������
	// ����	: �Ѱ��� non-member function (templete) ���� ��� �����̳ʿ��� ���� �˻� ����
	// ����	: �ڵ尡 ������ ����

	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);

}
// std::find ���� �Ϲ� �Լ�(���ø�)�� "�˰���" �̶�� �θ��ϴ�

// STL 3�� ��� : Container, Iterator, Algorithm

// STL
// 1998�� c++ 1�� ǥ��ȭ���� ä�õ� ǥ�� ���̺귯��
//	=> ��ü ���� ��Ÿ���� �ƴ� , templete ����� ����
// 
// => "�˰��� ��å" : STL �� ���� ���ڰ� ���� ����, ���߿� �о ��
// 