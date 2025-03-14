// 171page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};
//								const로 하면 상수 멤버 함수만 가능			상수 여도 화면 출력 가능 해야함
std::ostream& operator<<(std::ostream& os,								const Point& p)
{
	os << p.x << ", " << p.y;
	return os;
}

int main()
{
	Point p(5, 2);

	std::cout << p ;	// std::cout.operator<< (Point) 가 있으면 됩니다
							// 그런데, C++ 표준인 ostream에 멤버함수 추가 할 수 없습니다

							// 해결책 : 연산자 재정의는 멤버가 아닌 일반 함수도 가능
							// operator<<(std::cout, p)
							// operator<<(std::ostream, Point) 가 있으면 됩니다
		
// cout 의 별명을 만들 때는 non-const 로 해야합니다.

	std::ostream& o1 = std::cout;
	const std::ostream& o2 = std::cout;

	o1 << "hello";
//	o2 << "hello";
	// '<<': 왼쪽 피연산자로 'const std::ostream' 형식을 사용하는 연산자가 없거나 허용되는 변환이 없습니다
}



