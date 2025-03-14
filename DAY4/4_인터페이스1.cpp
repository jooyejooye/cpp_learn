// 4_인터페이스 - 159 page ~


#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera 
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};
class People
{
public:
	void use_camera(Camera* c) { c->take(); }
	void use_camera(HDCamera* c) { c->take(); }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hd;
	p.use_camera(&hd);

}

/*
위 코드의 문제점
	=> OCP 의 위반
	=> 기능 확장에는 열려있고 (OPEN) 코드 수정에는 닫혀야 한다 (CLOSED)

객체지향 프로그래밍이 지켜야 하는 5대 원칙 (각각 논문으로 발표된 이론)
=> SRP, OCP, LSP , ISP, DIP : SOLID 라고 칭함
*/

