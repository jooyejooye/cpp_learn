// 1_���۷���2-1
#include <iostream>
// 61 page
// 
// call by reference ( �Լ� ���ڷ� reference ���)��
// call by pointer�� �����ϰ� ���� ���� ����
// 
// ����
// 1. ������ ���� ������ ����
// 2. ������ ���� ���� �ϴ�
// //


int main()
{
	int* p2; // ok �ʱ�ȭ ���� ����
	int* p3 = nullptr; // null �ʱ� ����

	//int& r2; // reference �ʱⰪ �ʿ�
	//int& r3 = nullptr; // error ������ �ƴ�

}

void f1(int* p)
{
	if (p != nullptr)
		*p = 10;
}
f1(nullptr); // ���ڵ� �����Է� ���� if �� �ʿ�

void f2(int& r)
{
	r = 10;
}
f2(nullptr); // error : �ݵ�� ���ڷ� ��ȣ�� ������ �����մϴ�.