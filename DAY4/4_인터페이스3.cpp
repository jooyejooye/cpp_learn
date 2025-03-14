// 4_�������̽� - 159 page ~

/*
��� ����

���� ���̽� : ���Ѿ� �ϴ� ��Ģ�� ���� ���						ex) ICamera
�߻� Ŭ���� : ���Ѿ� �ϴ� ťĢ + �ٸ� ����� �ִ� ���	ex) ICamera_abstract

C#, Java : abstract interface ��� ������ Ű���尡 �־ ��Ȯ������
C++ �� ��ó�� �����ϴµ� ȥ��� ���� ����
*/

#include <iostream>
// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�" ��� ǥ������ ����
//		   "��� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�" 

class ICamera       
{
public:
	virtual void take() = 0;
	virtual ~ICamera() {  }  // interface �� �ᱹ ���������δ� ��� Ŭ���� �̹Ƿ�, �Ҹ��ڴ� �����Լ���!
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


