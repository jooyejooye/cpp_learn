// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
int main()
{
	Dog     dog;

	Dog*    p1 = &dog;  // ok
//	int*    p2 = &dog;    // error 
	Animal a;
	Animal* p3 = &dog;  // upcasting
	// 1. upcasting
	//		파생 클래스 주소는 기반 클래스 포인터 타입으로 암시적 형변환 가능
	// !!	기반 클래스 포인터로 파생 클래스 객체 가리킬 수 있다
	//		가능한 이유는 메모리 그림 생각해보기
	// call Animal::Animal () 이 맨 위에 컴파일러에 의해 들어감 > 부모 객체는 맨 위에 있다 > 이래서 부모 클래스 포인터로 가능

	// 2. 컴파일러는 컴파일 시간에는 p3 가르키는 곳에 어떤 객체 가 있는지 알 수 없다
	//		==> 아래 같은 코드가 있다면 실행 시 대상체가 변경될 수 있으므로
	//				if ( 사용자 입력 == 1 ) p3 = &a;

	// 3. Animal* 인 p3 을 가지고는 Animal에서 파생된 멤버만 접근 가능, 
	//										 dog 가 추가한 멤버는 접근 안됨
	// C++		: static type check, 멤버 접근이 유효한가를 컴파일 시간에 확인
	//				 나중에 p3 이 dog 말고 다른거 가르킬 수 있다 > 컴파일 할때는 이럴지 저럴지 모른다
	// python	: dynamic type check, 실행시간에 확인
	// 
	p3->age = 10; // ok
//	p3->color = 1; // error

	// 4. Animal* 인 p3로 Dog 고유 멤버에 접근하려면 Dog* 타입으로 캐스팅 해서 사용해야한다
	// 즉 개발자가 dog 가 맞다고 컴파일러에게 알려주는 것
	static_cast<Dog*>(p3)->color = 2;//ok
}

