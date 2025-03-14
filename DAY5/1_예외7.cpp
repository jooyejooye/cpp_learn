#include<iostream>

// noexcept - 182p : C++ 11
//	1.	함수가 예외가 없음을 알릴 때 사용
//  2.	함수가 예외가 없는지 있는지 조사할 때 사용 

//	컴파일러 :	헤더만 보고 구현,  링커가 연결 
//					컴파일러는 예외가 발생할지 안할지 모르니 일단 다 예외 발생한다고 가정

void foo()
{
	
}
// 1. 함수를 만든 사람이 예외가 없다고 보장 할 수 있으므로, noexcept 를 붙이면 됩니다.
//		장점	: 컴파일러가 보다 더 최적화된 기계어 코드를 만들게 되고
//		호출자가 예외 여부를 조사해서 보다 효율적인 코드를 작성 할 수 있습니다

//		단 정확히 알때만 표기하세요, 잘 모르면 표기하지 마세요!
//		일반 개발자 잘 안씀, library 내부 코드 더 잘함

//void goo() noexcept(true) // 위와 동일
//void goo() noexcept(false) // 예외 있다는 것
//void goo() noexcept( 다양한 조사를 통해서 결정할수도 있다. ) 
void goo() noexcept
{
	std::cout <<"no except" << std::endl;
}
int main()
{
	bool b1 = noexcept(foo());
	bool b2 = noexcept(goo());

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	if (noexcept(goo()))
		goo();
	else
	{

	}
	std::pair<int, int>p;
}