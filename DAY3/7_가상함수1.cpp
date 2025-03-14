// 7_가상함수1  144 page ~
//			   150 page
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function overide		 : 기반 클래스 함수를 파생 클래스가 다시 만드느 것
	// function overloading	 : 인자가 다르면 동일 이름 함수 2개 만들 수 있음
	//									square(int) , square(double) 
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1();		// animal cry
	Dog    d; d.Cry1();		// dog cry

	Animal* p = &d;		  
	// 실체 객체 는 dog
	// 포인터 타입은 animal
	p->Cry1(); // animal cry
}
/*
150 pg 내용

p-> Cry1() 을 어떤 함수와 연결할 것인가
=> 함수 바인딩 function binding 이라고 함

#1. static binding :  컴파일 시간에 컴파일러가 함수 호출을 결정
						  컴파일러는 p 가 가리키는 객체의 타입을 알 수 없다
						  컴파일러는 p 자체의 타입이 "animal*" 인 것을 알 수 있다.
						  => 컴파일러가 결정하면 "animal cry1" 호출
						  => 빠르지만 논리적으로 맞지 않음
C++/C# 언어의 기본 바인딩 정책

#2. dynamic binding : 컴파일 시간에는 p가 가리키는 메모리를 조사하는 기계어 코드 생성
							 실행 시에 p가 가리키는 메모리를 조사해서 어떤 타입인지 조사 후 호출을 결정
							 p 가 가리키는 곳에 dog 가 있따면 "dog cry" 호출
							 =>느리지만 논리적으로 맞음
Java, Python, Swift 등 대부분의 객체지향 언어가 사용하는 방식
C++/C# 언어의 가상함수 (Virtual function) > dynamic binding 써달라
*/
