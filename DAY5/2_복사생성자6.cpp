#include <iostream>

// �ڵ� ���� ��Ģ

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {} 
//	Point(const Point& p) : x(p.x), y(p.y)  {}
};

int main()
{
	Point p1;		
	Point p2(p1);    
}