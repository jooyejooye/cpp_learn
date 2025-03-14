// 4_인터페이스 - 159 page ~

/*
용어 정리

인터 페이스 : 지켜야 하는 규칙만 가진 경우						ex) ICamera
추상 클래스 : 지켜야 하는 큐칙 + 다른 멤버도 있는 경우	ex) ICamera_abstract

C#, Java : abstract interface 라는 별도의 키워드가 있어서 명확하지만
C++ 는 위처럼 구분하는데 혼용될 때도 있음
*/

#include <iostream>
// 규칙 : "모든 카메라는 아래 클래스로 부터 파생되어야 한다" 라고 표현하지 말고
//		   "모든 카메라는 아래 인터페이스를 구현해야 한다" 

class ICamera       
{
public:
	virtual void take() = 0;
	virtual ~ICamera() {  }  // interface 도 결국 문법적으로는 기반 클래스 이므로, 소멸자는 가상함수로!
};

class ICamera_abstract
{
	int color;
public:
	virtual void take() = 0;
};

class People
{
public:
	void use_camera(ICamera* c) { c->take(); } 
};



class Camera : public ICamera
{
public:
	virtual void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	virtual void take()  override { std::cout << "take HD picture" << std::endl; }
};

class phoneCamera : public ICamera
{
public:
	virtual void take()  override { std::cout << "take phoneCamera picture" << std::endl; }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hd;
	p.use_camera(&hd);

	phoneCamera ph;
	p.use_camera(&ph);

}


