#include <iostream>
#include <string>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// ��ü�� ���¸� ���ڿ��� ��ȯ�ϴ� �Լ�
	// => java, C# ���� �θ� ���Ǵ� ���
	// => �Ʒ� to_string() �� const member function�� �Ǵ� ���� ����

	/*
	1. �޼ҵ� ���� �� const meber function ���� ���� ������ �� �Ǵ� -> ��� ��ü�� ���ؼ��� ȣ�� ������ ��?
	*/
	std::string to_string() const
	{
		std::string s = std::to_string(x) + " ," + std::to_string(y);
		return s;
	}
};

int main()
{
	Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
	const Point p2(3, 2);
	std::cout << p2.to_string() << std::endl;
}
