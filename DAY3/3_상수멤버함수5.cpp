#include <iostream>
#include <string>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// 객체의 상태를 문자열로 반환하는 함수
	// => java, C# 에서 널리 사용되는 기술
	// => 아래 to_string() 은 const member function이 되는 것이 맞음

	/*
	1. 메소드 만들 때 const meber function 으로 할지 말지를 잘 판단 -> 상수 객체에 대해서도 호출 가능한 가?
	*/
	std::string to_string() const
	{
		std::string s = std::to_string(x) + " ," + std::to_string(y);
		return s;
	}
};

int main()
{
	Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
	const Point p2(3, 2);
	std::cout << p2.to_string() << std::endl;
}
