#include <iostream>

//가상함수 원리   153page ~

class Animal
{
	// *vtptr = animal_가상함수테이블주소; >>virtual 있으면 생성
	int age;
	int birth;
public:
//	virtual void Cry() {}
};
class Dog : public Animal
{
	int color;
};

int main()
{
	Animal a;	// 4,	8		16
	Dog    d;		// 8,	12		24

	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(d) << std::endl;
}


