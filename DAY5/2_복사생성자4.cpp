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
	// 사용자가 직접 만드는 복사 생성자 -> 깊은 복사 (deep copy)로 구현
	Vector(const Vector& v) 
	{
	//	1. 포인터가 아닌 멤버는 그냥 복사
		sz = v.sz;

	// 2. 포인터는 메모리 할당 후 메모리 자체를 복사
		ptr = new int[sz];
		memcpy(ptr, v.ptr, sizeof(int) * sz);	
	}
};



int main()
{
	Vector v1(4, 0); // *ptr = 100, sz=4 라고 하고

	Vector v2 = v1; // 컴파일러는 *ptr & sx 둘다 복사
	// v2 ; *ptr = 100, sz=4 이렇게 복사

	delete v1; // *ptr=100 한번 제거
	delete v2; //  *ptr=100 동일한 메모리 2번 제거 > 버그

}
