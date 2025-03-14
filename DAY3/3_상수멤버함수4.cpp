// 4_상수멤버함수1.cpp    105 page ~
#include <iostream>
class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
	void set(int a, int b) { x = a; y = b; }
	// 상수 멤버 함수는 선언과 구현 모두 표기 해야함
	//		앞으로 다양한 문법 배울 때 선언과 구현으로 분리 시 어떻게 표기 하는지 알아야 함
	// default parameter  : 선언 only
	// 상수 멤버 함수	     : 선언 + 구현
	void print() const;
};
void Point::print() const  // 상수 멤버 함수는 선언과 구현 모두 표기 해야함
{
	std::cout << x << ", " << y << std::endl;
}
int main()
{

}
