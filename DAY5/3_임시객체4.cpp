#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt(1, 2);

Point foo() 
{
	return pt; // 리턴용 복사본 생성, 임시 객체 > 함수 호출문장의 끝에서 파괴
}

int main()
{
	Point p(0, 0);
	foo(); // 리턴용 복사본, temporary 객체
}







