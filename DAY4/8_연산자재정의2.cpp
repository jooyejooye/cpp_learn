//  ������������ - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
	void print() const { std::cout << x << ", " << y << std::endl; }
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);
// ������ ������  ���� 
// 1.	�ǿ����� 2���� ��� primitive type �̸� "���� ������ ���� ����"
//		=> 3+ 4
// 2.  �ǿ����� �� �Ѱ��� user define type �̸� ��ӵ� �Լ� ȣ��
//	
	Point p5 = p1 + p2;  
	// operator+(p1,p2) �Ǵ� p1.operater+(p2) �� ã�� �ȴ�.
	// �̷� �̸��� �Լ� ������ error



}

