//  ������������ - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// ��� �Լ��� ���� operator+

	Point operator+(const Point& p) const
	{
		Point tmp(x + p.x, y + p.y);
		return tmp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// p1.operator+(p2)


	p3.print();
}

