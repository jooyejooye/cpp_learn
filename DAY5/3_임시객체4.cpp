#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt(1, 2);

Point foo() 
{
	return pt; // ���Ͽ� ���纻 ����, �ӽ� ��ü > �Լ� ȣ�⹮���� ������ �ı�
}

int main()
{
	Point p(0, 0);
	foo(); // ���Ͽ� ���纻, temporary ��ü
}







