
#include <iostream>

// ��ü ���� ���α׷����� �ٽ� #2. ����ü�� �Լ� ����
//		type �� ���� �� ���¸� ��Ÿ���� ������ & ���� ���� ���� �����ϴ� �Լ��� ��� type������
//		C ����ü     : ����ü �ȿ� �Լ� ���� �� ����
//		C++ ����ü : ����ü �ȿ� �Լ� ���� �� ����
// 
// �Լ��� ����ü �ȿ� ���� �� ����
//		1. �����͸� �Լ� ���ڷ� ������ �ʿ� ����
//		2. �پ��� ����ü(class) ���� ������ ���ؼ� ����ϱ� ����
//			������ Ÿ�� ���� ����
// 

struct Rect
{
	// ��� ������ (field)
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ� (method)
	//		Ư¡: �Լ� �ȿ��� ��� �����Ϳ� ���� ���� ����
	// 

	
	int getArea()
	{
		return (right - left) * (bottom - top);
	}

	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}

};



int main()
{
	Rect rc = { 12,14,2,5 };
	//int n1 = getRectArea(rc);
	//drawRect(rc);
	rc.draw(); // ��ü���� ��Ÿ�� : rc ���� ������ �˷��޶�� ��û
	int n2 = rc.getArea();
}