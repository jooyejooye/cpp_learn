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
// find_if �� ���׸� ����


bool foo(int n) { 	return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	auto ret1 = std::find_if(v.begin(), v.end(), foo);
	auto ret2 = std::find_if(v.begin(), v.end(), [](int n) { return n % 3 == 0; }); // lambda ǥ����, C++11 ���� ����
	// ret1 ret2 �Ѵ� ���� ����

	// ���� ǥ����(lambda expression)
	// => C++11
	// => �͸��� �Լ��� ����� ����
	// => �Լ� �̸��� �����ϴ� ��ġ�� "�Լ� ���� ��ü"�� �����ϴ� ���

	// [] : ����ǥ������ ���۵��� �˸��� ��ȣ
	//		lambda introducer
	// []  (int n) { return n % 3 == 0; }
	// return type & �Լ� �̸� ���� �ϰ� ����
	// 
	// []  (int n) -> bool { return n % 3 == 0; }
	//			��ȯ Ÿ�� �������� (�����Ϸ��� �˾Ƽ� ��������), ǥ���Ϸ��� �̷���!
	// 


}