// 148 page ~
#include <iostream>

// 핵심 : 상속 문법을 사용한다면 기반 클래스의 소멸자는 반드시 virtual로 하세요 
//			=> 가상 소멸자 라고 불리는 문법입니다.
// 
// 기반 클래스 소멸자가 virtual 이 아니어도
//	=> derived 소멸자가 하는 일이 없는 경우는 문제가 되지 않습니다
//	=> 그런데 안전한 코드를 작성하기 위해서
//	=> 기반 클래스 소멸자는 반드시 virtual로 하세요
// // 

class Base
{
public:
	Base()  { std::cout << "Based()" << std::endl; }
	virtual~Base() { std::cout << "~Based()" << std::endl; }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	virtual ~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d; // 문제 없음

	Derived* p = new Derived;
	delete p;  // 문제 없음
	/*
	Based()
	Derived()
	~Derived()
	~Based()
	*/


	Base* p = new Derived;           // 1. sizeof(Derived) 크기 메모리 할당
											 // 2. 생성자 호출
	delete p;  // 메모리 해제가 덜됨
	// 1. 소멸자 호출 : p -> 소멸자()
	// 2. 메모리 해제 
	// 
	// -----------------------------------------------------------------
	// 소멸자 호출도 결국 함수의 호출입니다 p->소멸자()
	// 
	// 1. 함수 호출 시, static binding 할지, dynamic binding 할지 결정해야함
	// 2. 컴파일러는 p 자체의 타입만 알기 때문에,
	//		p 의 타입인 base 의 클래스가 가상인지 아닌지 조사함
	// 
	// Base 소멸자가 가상이 아니면 : static binding 
	//							   포인터 타입으로 호출하므로
	//							   ~Base() 만 호출됨.!
	// 
	// Base 소멸자가 가상이 이면   : dynamic binding 
	//							    p가 가리키는 곳을 조사해서 호출 결정
	//								p가 Derived 객체를 가리키면
	//								~Derived() 호출

	/*
	Based()
	Derived()
	~Based()
	*/
}