// 7_가상함수1  144 page ~
//			   150 page
#include <iostream>

class Animal
{
public:
	// non-virtual : C++기본 바인딩(static binding)하라는 의미
	//				 포인터 타입으로 함수 결정
	void Cry1() { std::cout << "Animal Cry1" << std::endl; }

	// virtual : dynamic binding 하라는 의미
	//			 실행시간에 객체의 종류를 조사해서 호출 결정
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  // 2
	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }  // 2
};

int main()
{
	Animal a;		// animal cry
	Dog    d;	// dog cry

	Animal* p = &d;

	p->Cry1(); // animal cry1
	p->Cry2(); // dog cry2
}
/*
* p->Cry1(); // animal cry1
		mov     rax, QWORD PTR [rbp-8]
		mov     rdi, rax
		call    Animal::Cry1()

p->Cry2(); // dog cry2 >> call rdx : 조사 하고 호출한다
		mov     rax, QWORD PTR [rbp-8]
		mov     rax, QWORD PTR [rax]
		mov     rdx, QWORD PTR [rax]
		mov     rax, QWORD PTR [rbp-8]
		mov     rdi, rax
		call    rdx


*/