#include <iostream>

// 아래 코드에서 에러를 모두 찾아 보세요
class Base
{
public:
//	Base() { std::cout << "Base()" << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	/*
	// 1. 아래 2줄이 에러인 이유를 정확히 알아야 함, 주석처럼 컴파일러가 추가햇기 떄문
	*/
//	Derived(){ std::cout << "Derive()" << std::endl; }				// Derived() { call Base::Base() ; }
//	Derived(int a) { std::cout << "Derive(int a)" << std::endl; }		// Derived(int a) { call Base::Base(); }

	// 2. 해결책 : 기반 클래스 디폴트 생성자 없으면 아래 처럼 사용자가 기반 클래스 다른 생성자를 호출하게 해야함 
	Derived(): Base(0)
	{ std::cout << "Derive2()" << std::endl; }				
	Derived(int a):Base(a)
	{ std::cout << "Derive2(int a)" << std::endl; }		// Derived(int a) { call Base::Base(); }

};


int main()
{
	Derived a;
	std::cout << "--------------" << std::endl;
	Derived b(1);

}




