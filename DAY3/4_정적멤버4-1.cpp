// 4_�������4-1.cpp
class Car
{
	int color;
	int speed;
public:
	void set(int c, int s)		// void set(Car* this, int c, int s)
	{
		color = c;	// this->color = c;
		speed = c;  // this->speed = s; �� ����˴ϴ�.
	}
	// �ٽ� : static member function �� this �� �߰����� ���� ��� �Լ� �Դϴ�.
	static void foo(int c, int s) // void foo(int c, int s)
	{
		color = c; // this->color = c �� �Ǿ�� �ϴµ� ? this �� �����ϴ�.
		speed = c; // ?
	}
};
int main()
{
	//	const Car c;
	Car c;
	// �����Ϸ��� ����
	c.set(10, 20);		// set(&c, 10, 20)

	Car::foo(10, 20);	// foo(10, 20);
	c.foo(10, 20);		// foo(10, 20);
	// ��, c �� �Լ� ���ڷ� ���޵��� �����Ƿ�
	// c �� ��� ��ü���� �ƴ����� ��������ϴ�.
}

