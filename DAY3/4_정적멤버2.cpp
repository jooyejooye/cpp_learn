// 3_정적멤버1 - 111 page
/*
2. 전역변수
전역변수는 모든 객체가 공유
객체의 갯수 파악 성공

단점
1. 전역변수는 누구나 접근 가능 > 안전하지 않다 -> private 으로 보호 할 수 없을까?
2. 이름충돌
Car, bike boat 등의 객체도 갯수 파악 하고 싶다.
cnt 말고 다른 이름의 전역 변수 필요
Car::cnt, Bike::cnt, Boat::cnt 이런건 안되나?
*/
#include <iostream>
int cnt = 0;
class Car
{
	int color = 0;
public:	
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;
	std::cout << cnt << std::endl;
}

// 1번 복사
