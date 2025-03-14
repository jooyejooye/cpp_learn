//  연산자재정의 - 163 page
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
	// 멤버 버전 또는 일반 함수 버전 중에서
	// 한개만 제공해야 한다.
	p3.print();

	// 멤버 함수가 좋을까 ? non-member 함수가 좋을까 ?

	// 멤버가 좋다는 주장 : private 데이타 접근하려면 멤버가 좋다.(캡슐화)
	// non-member 주장 : 멤버로 안될때가 있다.

	int n = 1;
	Point p4 = p1 + p2; // p1.operator+(Point) 필요
	Point p5 = p1 + n;	// p1.operator+(int)
	Point p6 = n + p1;   // n.operator+(Point) >> n 은 int 타입으로 만들 수 없다
								// non-member 로는 만들 수 있다

	// n + p1 = p1 + n , 교환법칙 성립해야한다 
	// 
	// 권장
	// 교환법칙이 필요한 이항연산자									    + - * ...		: non-member 권장
	// 교환법칙이 필요 없고, 객체 상태가 변경되는 연산자:			+= -= *= ...	: member 권장
	//																			( ) , [ ] , -> , =	: member 만 가능
	//																				?, ::, *, .*		: 연산자 재정의 안됨
	// //
}

