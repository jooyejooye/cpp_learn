//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x , int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 다음중 어떤 코드가 보기 좋을 까요 ?
	Point p3 = Add(p1, p2);
	Point p4 = p1.Add(p2);
	Point p5 = p1 + p2;   

	//  C++ 언어의 철학	: 사용자 정의 타입도 +, - 같은 연산자를 사용할 수 있게 하자 "연산자 재정의 문법"
	// 
	//	Java					: C++ 이 복잡한 이유 중에 하나는 연산자 재정의 이다. JAVA는 지원하지 않겠다
	//							p1.Add(p2) 처럼 하자
	// //
}

