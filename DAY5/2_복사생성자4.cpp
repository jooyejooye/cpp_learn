#include <iostream>


class Vector
{
private:
	int* ptr;
	int  sz;
public:
	Vector(int size, int value) : sz(size)
	{
		ptr = new int[sz];
		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~Vector() { delete[] ptr; }
	// ����ڰ� ���� ����� ���� ������ -> ���� ���� (deep copy)�� ����
	Vector(const Vector& v) 
	{
	//	1. �����Ͱ� �ƴ� ����� �׳� ����
		sz = v.sz;

	// 2. �����ʹ� �޸� �Ҵ� �� �޸� ��ü�� ����
		ptr = new int[sz];
		memcpy(ptr, v.ptr, sizeof(int) * sz);	
	}
};



int main()
{
	Vector v1(4, 0); // *ptr = 100, sz=4 ��� �ϰ�

	Vector v2 = v1; // �����Ϸ��� *ptr & sx �Ѵ� ����
	// v2 ; *ptr = 100, sz=4 �̷��� ����

	delete v1; // *ptr=100 �ѹ� ����
	delete v2; //  *ptr=100 ������ �޸� 2�� ���� > ����

}
