#include <iostream>

//가상함수 원리   153page ~

class Animal
{
	int age;
public: 
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------
class Dog : public Animal
{
	int color;
public:	
	virtual void Cry() override {}
};

int main()
{
	Animal a;
	Dog    d;
	Animal* p = &d;
	p->Cry();   // dog Cry 부를것 : 가상함수 이므로 dynamic binding

	// 1. p가 가리키는 곳에 어떤 타입의 객체가 있는지 어떻게 알 수 있을까?
	// 2. 조사했다고 가정해도 어떻게 dog cry() 호출할까?
	//	=> dog cry() 를 호출하려면 주소를 알아야 한다
	// 
	// 
	// //
}


