// 171page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};
//								const�� �ϸ� ��� ��� �Լ��� ����			��� ���� ȭ�� ��� ���� �ؾ���
std::ostream& operator<<(std::ostream& os,								const Point& p)
{
	os << p.x << ", " << p.y;
	return os;
}

int main()
{
	Point p(5, 2);

	std::cout << p ;	// std::cout.operator<< (Point) �� ������ �˴ϴ�
							// �׷���, C++ ǥ���� ostream�� ����Լ� �߰� �� �� �����ϴ�

							// �ذ�å : ������ �����Ǵ� ����� �ƴ� �Ϲ� �Լ��� ����
							// operator<<(std::cout, p)
							// operator<<(std::ostream, Point) �� ������ �˴ϴ�
		
// cout �� ������ ���� ���� non-const �� �ؾ��մϴ�.

	std::ostream& o1 = std::cout;
	const std::ostream& o2 = std::cout;

	o1 << "hello";
//	o2 << "hello";
	// '<<': ���� �ǿ����ڷ� 'const std::ostream' ������ ����ϴ� �����ڰ� ���ų� ���Ǵ� ��ȯ�� �����ϴ�
}



