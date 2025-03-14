#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// #1. ��� 
	int n = 10;  // n : ���� : �������� �ٲ� �� ����
	n = 20;
	Rect r = { 1,1,10,10 }; // r : ������ �ƴ� ��ü��� ��
	
	// ��ü(object) : ���� �����ϴ� ��� �͵� 
	// int n�� n�� �޸𸮿� ���� �� > ��ü
	// � ���� n�� ������ �ƴ� ��ü ��� ��� ���
	// 
	// C++ ����
	// primitive �� �޸𸮿� ������ �� : ����
	// user define type�� �޸𸮿� ������ �� : ��ü��� �θ��ϴ�
	// 

	// #2. �޸� layout
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };
	// stack : ��� �����͸� ��ü�� �Ѱ��� ������
	// ��� �Լ��� code �޸𸮿� �Ѱ����� ����
	// 
	std::cout << sizeof(Rect) << std::endl;    // 16
	std::cout << sizeof(r1) << std::endl;		// 16
	std::cout << sizeof(r2) << std::endl;		// 16
}
