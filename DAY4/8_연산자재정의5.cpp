//  ������������ - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	Point operator+(const Point& p) const
	{
		Point tmp(x + p.x, y + p.y);
		return tmp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	Point tmp(p1.x + p2.x, p1.y + p2.y);
	return tmp;
}



int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// error.
	// ��� ���� �Ǵ� �Ϲ� �Լ� ���� �߿���
	// �Ѱ��� �����ؾ� �Ѵ�.
	p3.print();

	// ��� �Լ��� ������ ? non-member �Լ��� ������ ?

	// ����� ���ٴ� ���� : private ����Ÿ �����Ϸ��� ����� ����.(ĸ��ȭ)
	// non-member ���� : ����� �ȵɶ��� �ִ�.

	int n = 1;
	Point p4 = p1 + p2; // p1.operator+(Point) �ʿ�
	Point p5 = p1 + n;	// p1.operator+(int)
	Point p6 = n + p1;   // n.operator+(Point) >> n �� int Ÿ������ ���� �� ����
								// non-member �δ� ���� �� �ִ�

	// n + p1 = p1 + n , ��ȯ��Ģ �����ؾ��Ѵ� 
	// 
	// ����
	// ��ȯ��Ģ�� �ʿ��� ���׿�����									    + - * ...		: non-member ����
	// ��ȯ��Ģ�� �ʿ� ����, ��ü ���°� ����Ǵ� ������:			+= -= *= ...	: member ����
	//																			( ) , [ ] , -> , =	: member �� ����
	//																				?, ::, *, .*		: ������ ������ �ȵ�
	// //
}

