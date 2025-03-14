// 2_복사생성자1.cpp
#include <iostream>

// 124 page ~ 

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2
	// 복사 생성자 copy constructor
	//		자신과 동일한 타입의 객체를 한개 받는 생성자
	//		사용자 만들지 않으면 컴파일러가 제공한다
	//		컴파일러 제공 버전은 아래와 동일
	Point( const Point& other) : x(other.x), y(other.y){}
};
int main()
{
	// 아래 4줄에 대해서 생각해 봅시다.
	Point p1;				// 1
//	Point p2(1);			// error
	Point p3(1,2);		// 2
	Point p4(p3);		// 컴파일러가 만들어줌, 나랑 동일한 타입을 인자로 갖는 생성자는 컴파일러가 만들어줌
							// => 복사 생성자
	Point p5 = p3;// 복사 생성자
}