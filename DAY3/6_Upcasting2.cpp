#include <vector>


class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};
void Newyear(Animal* p) { 	++(p->age); }
//void Newyear(Dog* p) { ++(p->age); }  => 이렇게 하면 dog만 사용 가능, cat 안됨


int main()
{
	Dog d;
	Cat c;
	Newyear(&d);
	Newyear(&c);
	// Upcasting 활용/장점
	std::vector<Dog*> v1;  // dog 객체만 보관하는 vector
	std::vector<Animal*> v2;  // 모든 동물 객체를 보관하는 vector, 동종을 보관하는 컨테이너 컬렉션
	

}
