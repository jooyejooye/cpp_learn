// 3_정적멤버1 - 111 page

#include <iostream>

class Car
{
	int color = 0;
public:
	static int cnt;  // static member data
	// 모든 객체가 공유하는 멤버 데이터, 전역변수와 유사 ( car 전용 전역변수)

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이터는 외부 정의 필요, 초기화도 외부에서
int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;
	std::cout << Car::cnt << std::endl;
}

// 1번 복사
