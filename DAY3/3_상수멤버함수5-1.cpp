#include <iostream>
#include <string>

/*
���� ����� ( logical constness)

�ܺ� ����� ���忡�� "��� ��� �Լ�" �� �Ǵ� ���� ������
Ŭ���� ��� �Լ� ������ ��� ��� �Լ� �ȿ��� ��� ����Ÿ ������ �ʿ��� ���

�ذ�å : mutable Ű����
*/
class Point
{
	int x, y;

	// ��� ��� �Լ� �ȿ����� ���� �����ϵ��� �ϴ� ��� ����Ÿ ���� �� ���
	mutable std::string cache;
	mutable bool cache_valid = false;
public:
	Point(int a, int b) : x(a), y(b) {}

	std::string to_string() const
	{
		if (cache_valid == false)
		{
			cache = std::to_string(x) + " ," + std::to_string(y);
			cache_valid = true;
			// x,y �� ����Ǵ� �Լ����� cache_Valid = false �� ����
		}
		
		return cache;
	}
};

int main()
{
	Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
	const Point p2(3, 2);
	std::cout << p2.to_string() << std::endl;
}
