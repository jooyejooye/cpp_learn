#include <iostream>

class Point
{
	int x, y;
public:
	// this 활용 #1 : 이름 충돌이 있거나, 멤버 데이타임을 명확하게 하기 위해서
	void set(int x, int y) 
	{
		this -> x = x;	
		this -> y = y;
	}
	// this 활용 #2 : this 또는 *this 를 반환하는 멤버 함수
	//					 멤버 함수 호출을 연속적으로 할 수 있음
	Point* foo() { return this; }

	Point& goo() { return *this; }  // 참조 return 필수

};
int main()
{
	Point p1;
	p1.set(10, 20);

	p1.foo()->foo()->foo();  // pointer 로 반환
	p1.goo().goo().goo();    // p1 객체 반환

	// std::cout 의 원리가 * this  반환(목 오후)
	std::cout << "a" << "b";
	// cout.operater("a") .operater("b")


	/*
	java 의 빌더라는 기술

	Person p;
	p.set_name("kim") . set_age(20) . set_wight(60);  // java는 default parameter없음 하나씩 따로따로 보내야함

	C++
	set("kim", 20, 60)
	set("kim") 
	
	java 이렇게 할 수 없음


	*/

}
