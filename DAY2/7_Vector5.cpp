#include <iostream>


class Vector
{
private:
	// 1. ���� �Ҵ� �� �޸𸮸� �����Ϸ��� �Ʒ� 2�� ������ �ʿ�
	int* ptr;
	int sz;
public:
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];
		for (int i = 0; i < sz; i++)
		{
			ptr[i] = value;
		}
	}
	~Vector()
	{
		delete[] ptr
	}
};

int main()
{
	// 2. �Ʒ� ���� ���� �� �޸� ��� �����غ���
	Vector v(4,0); 

}