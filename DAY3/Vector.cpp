#include "Vector.h"  // Vector.cpp 만들 때는 선언 한 것을 가져와야함
#include<cstring> // memcpy 사용

Vector::Vector(int size, int value) :sz(size)  // default parameter 는 선언과 구현 둘다 있을 때 양쪽에 있으면 안됨
{
	//sz = size;  // :sz(size) 이걸로 대체
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
