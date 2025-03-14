#include <iostream>

// 파일 분할 이야기 - 120 ~ 121 page
// Car.h
class Car
{
	int color = 0;
	static int cnt;
public:
	Car();
	~Car();

	// #1. static 멤버 함수 만들때 static 키워드는 선언에만 표기합니다.
	// => 대부분 문법이 선언에만 표기하는데
	// => 상수 멤버 함수의 const 만 선언과 구현에 모두 표기
	static int get_count();
};

// #2. static 멤버 데이타의 외부 선언은 .cpp 에 있어야 합니다.
// 121 page 완전한 코드 참고!
// Car.cpp
int Car::cnt ;  // 전역변수, 전영변수는 초기값 생략시 0으로 자동 초기화

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

int Car::get_count()
{
	return cnt;
}



int main()
{

}
