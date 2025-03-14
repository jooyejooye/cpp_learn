#include <iostream>

// friend 79page ~

class Bike
{
	int gear = 0;
public:
	void setGear(int n) { gear = n; }

	// friend �Լ� : ��� �Լ��� �ƴ����� private ����� ���� �� �� �ְ� �ش޶�� �ǹ�
	friend void fixBike();

	// 1. Set get �Լ��� ����ϸ� �Ǵµ� �� friend �Լ� ���峪��?
	//		=> set get �� �����ϴ� ���� ��� ������ ���� �����ϰ� �ϴ� ��
	//		=> friend �� Ư�� �Լ����Ը� ���� ������ �ִ� ��
	// 
	// 2. ��� �Լ��� ����� ���� �ʳ���? �� �Ϲ� �Լ��� �ϳ���?
	//		=> ��� �Լ��� �� �� ���� ���� �ֽ��ϴ� (������ ������)
	// 
	// 3. private ���� ���Ҵµ� �ٽ� open �ϴ� ���� ������ �ʳ���?
	//		=> �׷��� ������ ���� ����
	//		=> C++ ���� �ִ� ����. �ٸ� ���� ����
	// //
	};

void fixBike(Bike& b)
{
	Bike b;
	b.gear = 10;
}

int main()
{
	Bike b;
	fixBike(b);
}