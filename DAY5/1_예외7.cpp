#include<iostream>

// noexcept - 182p : C++ 11
//	1.	�Լ��� ���ܰ� ������ �˸� �� ���
//  2.	�Լ��� ���ܰ� ������ �ִ��� ������ �� ��� 

//	�����Ϸ� :	����� ���� ����,  ��Ŀ�� ���� 
//					�����Ϸ��� ���ܰ� �߻����� ������ �𸣴� �ϴ� �� ���� �߻��Ѵٰ� ����

void foo()
{
	
}
// 1. �Լ��� ���� ����� ���ܰ� ���ٰ� ���� �� �� �����Ƿ�, noexcept �� ���̸� �˴ϴ�.
//		����	: �����Ϸ��� ���� �� ����ȭ�� ���� �ڵ带 ����� �ǰ�
//		ȣ���ڰ� ���� ���θ� �����ؼ� ���� ȿ������ �ڵ带 �ۼ� �� �� �ֽ��ϴ�

//		�� ��Ȯ�� �˶��� ǥ���ϼ���, �� �𸣸� ǥ������ ������!
//		�Ϲ� ������ �� �Ⱦ�, library ���� �ڵ� �� ����

//void goo() noexcept(true) // ���� ����
//void goo() noexcept(false) // ���� �ִٴ� ��
//void goo() noexcept( �پ��� ���縦 ���ؼ� �����Ҽ��� �ִ�. ) 
void goo() noexcept
{
	std::cout <<"no except" << std::endl;
}
int main()
{
	bool b1 = noexcept(foo());
	bool b2 = noexcept(goo());

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	if (noexcept(goo()))
		goo();
	else
	{

	}
	std::pair<int, int>p;
}