// 4_�������̽� - 159 page ~


#include <iostream>

// ī�޶� ���� ������ ���� 
// ī�޶� �����ڿ� ī�޶� ����� ���̿� ���Ѿ� �ϴ� ��Ģ�� ���� ���� �մϴ�
// 
// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�
// //
class ICamera       ////////// ���� ī�޶�� ���� ������ ��Ģ�� ����, ����ڴ� ��Ģ��θ� ����ؾ���
{
public:
	virtual void take() = 0;
};

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }  // �߻� Ŭ������ �����ʹ� ����, ��ü �Ұ���
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
