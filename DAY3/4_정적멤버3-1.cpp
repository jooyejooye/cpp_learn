#include <iostream>

class Car
{
	int color = 0;
public:
	static int cnt;  
	Car() { ++cnt; }
	~Car() { --cnt; }
};
// 1. static ��� �����ʹ� class �ȿ� �����ϰ�,
// class �ܺο��� ���� �ʿ�, �ʱ�ȭ�� �ܺο���
int Car::cnt = 0;  // ::cnt : ��������,, Car::cnt > car �� ���� ��������

/*
* ������ ��ġ�� �޸� ����
�������� : stack
�������� : heap
�������� : (���������� ������) static / data �޸�


*/
// 2. Car ��ü�� �Ѱ��� �������� �ʾƵ� static ��� ����Ÿ�� �̹� �޸𸮿� ����
//		���ڵ尡 �޸𸮿� cnt ������ �Ҵ� �ϴ� �ڵ� ( ���������� ���� )
//		static storage (�������� ���̴� ����) �� �Ҵ�
// 
int main()
{
	// 3. ��ü�� ��� "Ŭ���� �̸�::static����̸�" ���� ���� ���� 
	//		�� public �� �ִ� ���
	std::cout << Car::cnt << std::endl;

	// 4. ��ü�� �����ϸ� static �� �ƴ� ��� ����Ÿ�� stack�� ���̰� �˴ϴ�
	//		sizeof(Car) �Ǵ� sizeof(c1) �� color �� �־ 4
	Car c1;
	Car c2;

	std::cout << sizeof(Car) << std::endl; //4
	std::cout << sizeof(c1) << std::endl;  //4

	// 5. C++ ������ static ��� ����Ÿ�� 2���� ������� ���� ����
	//	- 	Ŭ���� �̸�::����̸�
	//	-	��ü�̸�.����̸�

	std::cout << Car::cnt <<" �ּ�:" << &Car::cnt << std::endl;
	std::cout << c1.cnt << " �ּ�:" << &c1.cnt << std::endl; 
	std::cout << c2.cnt << " �ּ�:" << &c2.cnt << std::endl;

	//�� 3���� ��� ���� �޸� ���� �ϴ� �ڵ�
	// Ŭ���� �̸� ����ϴ� ���� ����
	//	-> ��ü �̸� ���� ��ü ��ü�� Ư������ ���� ����
	// 
	// java c# swift python rust ���� ��κ��� ��� -> Ŭ���� �̸����θ� ���� ����
	// 

	


}

