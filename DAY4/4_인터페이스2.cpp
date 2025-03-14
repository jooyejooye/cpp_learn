// 4_인터페이스 - 159 page ~


#include <iostream>

// 카메라를 먼저 만들지 말고 
// 카메라 제작자와 카메라 사용자 사이에 지켜야 하는 규칙을 먼저 설계 합니다
// 
// 규칙 : 모든 카메라는 아래 클래스로 부터 파생되어야 한다
// //
class ICamera       ////////// 실제 카메라는 아직 없지만 규칙은 있음, 사용자는 규칙대로만 사용해야함
{
public:
	virtual void take() = 0;
};

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }  // 추상 클래스는 포인터는 가능, 객체 불가능
};



class Camera : public ICamera
{
public:
	virtual void take()  { std::cout << "take picture" << std::endl; }
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
