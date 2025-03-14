// 6_함수1.cpp  34 page ~
// C++함수의 특징 1. 디폴트 파라미터
#include <iostream> // printf 용

// 선언
void foo(int a = 0, int b = 0, int c = 0);
void f2(int a , int b , int c);

// 구현 >> 구현에서 디폴트 파라미터 사용 불가
void foo(int a, int b, int c)
{
	std::cout << a << b << c << std::endl;
}

void f2(int a=111, int b=222, int c=333)
{
	std::cout <<"f2: " << a << b << c << std::endl;
}

int main()
{
	std::cout << "4-1 function" << std::endl;
	foo(1, 2, 3);
	f2(1, 2);
	foo(1);
	foo();
};




