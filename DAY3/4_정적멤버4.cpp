#include <iostream>

class Car
{
	int color = 0;
	static int cnt;
public:
	
	Car() { ++cnt; }
	~Car() { --cnt; }

	// 멤버 함수:  객체가 있어야지만 호출 가능
//	int get_count() const { return cnt; }
// 
	// static 멤버 함수: 객체가 없어도 호출 
	//						 클래스 이름:: 함수 이름() 으로 호출
	//						 "Car::get_count()" 
	// -> static 은 객체 상수인 것을 고려할 필요 없음, 객체 없이 호출 함으로 상수 멤버 함수 라는 개념 적용 안됨
	static int get_count() { return cnt; }
};

int Car::cnt = 0;  // private 멤버라도 외부 초기화 가능

int main()
{	

	const Car c1;  // static 함수는 상수 객체여도 노상관
	Car c2;

	std::cout << Car::get_count() << std::endl;  // 권장
	std::cout << c1.get_count() << std::endl;    // 권장 안함


}

