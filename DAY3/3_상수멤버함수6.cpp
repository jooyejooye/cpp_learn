#include <iostream>
class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	// 상수 멤버 함수의 정확 한 의미 
	//  
	void set(int a, int b)  // void set(Point* this, int a, int b)
	{
		x = a; y = b; 
	}

//	void print()				// void print(Point* this)
	void print() const		// void print(const Point* this)
	{	
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(11, 2);
	p.print();		  // print(&p)
}

