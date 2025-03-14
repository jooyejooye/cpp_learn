// 3_정적멤버1 - 111 page
/*
1. 멤버 데이타 cnt 사용
	멤버 데이타는 객체당 한개씩 생성된다
	객체의 갯수 파악 실패!

*/
#include <iostream>

class Car
{
	int color=0;
public:
	int cnt = 0;
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;
	std::cout << c1.cnt <<"   " << c2.cnt << std::endl;
}

