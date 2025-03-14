#include "Vector.h"  // Vector.cpp ���� ���� ���� �� ���� �����;���
#include<cstring> // memcpy ���

Vector::Vector(int size, int value) :sz(size)  // default parameter �� ����� ���� �Ѵ� ���� �� ���ʿ� ������ �ȵ�
{
	//sz = size;  // :sz(size) �̰ɷ� ��ü
	ptr = new int[sz];

	for (int i = 0; i < sz; i++)
		ptr[i] = value;
}
Vector::~Vector()
{
	delete[] ptr;
}
int& Vector::at(int idx)
{
	return ptr[idx];
};
int Vector::size() { return sz; }
bool Vector::empty() { return sz == 0; }
void Vector::resize(int newsize)
{
	if (sz < newsize)
	{
		int* tmp = new int[newsize];
		memcpy(tmp, ptr, sizeof(int) * sz);
		delete[] ptr;
		ptr = tmp;
		sz = newsize;
	}
}
