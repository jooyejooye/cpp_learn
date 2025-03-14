#include <iostream>

class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요

	// 아래 foo 를 호출한 것은 객체를 생성했다는 의미
	// 따라서 모두 ok
	void foo()
	{
		color = 0;	// 1. this->color = 0
		cnt = 0;	// 2.  static > 메모리에 있으니까 ㄱㅊ
		goo();		// 3. ok
		std::cout << this; // 4. ok
	}
	static void goo()
	{
		color = 0;	// 5. error 객체가 있어야만 메모리 존재 this-> color
		cnt = 0;	// 6. ok static : cnt 는 객체가 없어도 메모리 존재
		foo();		// 7. error 객체가 있어야만 호출 가능한 함수
		std::cout << this; // 8. error static 은 this 없음, 객체가 있어야지 된다
	}
};
int Car::cnt;

int main()
{
}

/*
핵심
static member function에서는
static member (data function) 만 사용 가능한다.

*/
