#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
//	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	/*
	Rect() // Point�� ����Ʈ �����ڰ� �����Ƿ� �Ʒ� �ڵ�� ����
	{
		std::cout << "Rect()" << std::endl;
	}
	*/
	// �ذ�å : �ɹ� �ʱ�ȭ ����Ʈ�� ��ġ�� � ���·� �����ڸ� ȣ���� �� ǥ��

	Rect() : ptFrom(0,0) , ptTo(1,2) 
	{

		// call Point::Point(0,0) <- ptfrom
		// call Point::Point(1,2) <- ptTO
		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r;  // call Rect::Rect() ȣ��
}




