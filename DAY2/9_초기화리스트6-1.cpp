#include <iostream>
int g = 10;
// member field initialization
class Point
{
	int x; 
	int y = ++g;  // ���� �̷��� ���� �� ��, =0 �� ���� literal �ʱ�ȭ�� ���
public:
	Point() {}							// x(0) , y(++g)
	Point(int a) :  y{ a } {}         // x(0) , y(a)
};

int main()
{
	Point p1;
	Point p2(3);
};


// Zig ��� : ���̴� ��� ���� �ȴ�
// �����Ϸ� �߰��ϰų� �������� ����
// ���� �Ӻ���忡�� �ߴ� ���
// ��


