//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
	void print() const { std::cout << x << ", " << y << std::endl; }
	friend Point operator+(const Point&, const Point&);
	
};

Point operator+(const Point& p1, const Point& p2)
{
	Point temp(p1.x + p2.x, p1.y + p2.y); // x & y private 이라 접근 불가 >> friend 로 등록
	return temp;
}




int main()
{
	Point p1(1, 1);
	Point p2(2, 3);

	Point p5 = p1 + p2;  // p1.operator+(p2)
	//Point p5 = p1.operator+(p2)
	p5.print();		


}

