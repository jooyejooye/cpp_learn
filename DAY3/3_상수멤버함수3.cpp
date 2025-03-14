#include <iostream>

class Test
{
public:
	void foo()       { std::cout << "foo" << std::endl; }				// 동일 이름의 멤버 함수를 "비상수 멤버 함수"
	void foo() const { std::cout << "foo const" << std::endl; }		// 상수 멤버 함수로 동시 만들 수 있음
};

int main()
{

	// 상수 객체는 상수 멤버 함수만 호출 가능
	const Test ct;
	ct.foo();   // foo const 호출

	// 비상수 객체는 모두 호출 가능 한데, 우선순위 존재
			// 1. foo() 호출, 없다면
			// 2. foo const 호출
	Test t;
	t.foo();
}

