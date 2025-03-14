// 2_���������1.cpp
#include <iostream>

// 124 page ~ 

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2
	// ���� ������ copy constructor
	//		�ڽŰ� ������ Ÿ���� ��ü�� �Ѱ� �޴� ������
	//		����� ������ ������ �����Ϸ��� �����Ѵ�
	//		�����Ϸ� ���� ������ �Ʒ��� ����
	Point( const Point& other) : x(other.x), y(other.y){}
};
int main()
{
	// �Ʒ� 4�ٿ� ���ؼ� ������ ���ô�.
	Point p1;				// 1
//	Point p2(1);			// error
	Point p3(1,2);		// 2
	Point p4(p3);		// �����Ϸ��� �������, ���� ������ Ÿ���� ���ڷ� ���� �����ڴ� �����Ϸ��� �������
							// => ���� ������
	Point p5 = p3;// ���� ������
}