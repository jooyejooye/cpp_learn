#include <iostream>

// ���� ���� �̾߱� - 120 ~ 121 page
// Car.h
class Car
{
	int color = 0;
	static int cnt;
public:
	Car();
	~Car();

	// #1. static ��� �Լ� ���鶧 static Ű����� ���𿡸� ǥ���մϴ�.
	// => ��κ� ������ ���𿡸� ǥ���ϴµ�
	// => ��� ��� �Լ��� const �� ����� ������ ��� ǥ��
	static int get_count();
};

// #2. static ��� ����Ÿ�� �ܺ� ������ .cpp �� �־�� �մϴ�.
// 121 page ������ �ڵ� ����!
// Car.cpp
int Car::cnt ;  // ��������, ���������� �ʱⰪ ������ 0���� �ڵ� �ʱ�ȭ

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

int Car::get_count()
{
	return cnt;
}



int main()
{

}
