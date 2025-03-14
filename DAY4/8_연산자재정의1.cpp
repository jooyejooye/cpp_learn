//  ������������ - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x , int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// ������ � �ڵ尡 ���� ���� ��� ?
	Point p3 = Add(p1, p2);
	Point p4 = p1.Add(p2);
	Point p5 = p1 + p2;   

	//  C++ ����� ö��	: ����� ���� Ÿ�Ե� +, - ���� �����ڸ� ����� �� �ְ� ���� "������ ������ ����"
	// 
	//	Java					: C++ �� ������ ���� �߿� �ϳ��� ������ ������ �̴�. JAVA�� �������� �ʰڴ�
	//							p1.Add(p2) ó�� ����
	// //
}

