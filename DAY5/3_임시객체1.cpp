#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
	//Point pt(1, 2);  // pt �� �̸� �ִ� ��ü (named object)
						// �̸��� �����Ƿ� ���� ���忡�� ���� ����
						// ���� : �ڽ��� ������ { } �� ���� �� �� �ı�

	Point (1, 2);     // �̸� ���� ��ü (unnamed object)
						// <= �Լ� ȣ�� �ƴ�, point �� �Լ� �ƴ�
						// �̸��� �����Ƿ� �ٸ� ���忡�� ��� ����
						// ������ ";" �� ������ �ı�
						// 
						// �ӽ� ��ü (temporary) ��� �Ҹ�
						// Rust ��� ������ ���� �߿��ϰ� �ٷ�� ����
						// 

	std::cout << "-------" << std::endl;
	Point(3, 4), std::cout << "oo\n";  // �޸� �����ڴ� �� ���� ǥ������ �ϳ��� �����ϴ� �������̴�.
	std::cout << "-------" << std::endl;

}





