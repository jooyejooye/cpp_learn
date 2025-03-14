#include <iostream>

// 왜 복사생성자를 알아야 하나요 ?
// 그냥 컴파일러가 만들어주는 것 사용하면 안되나요 ?
// => 대부분의 경우는 컴파일러 버전사용하면 됩니다.

// 그런데, 사용자가 만들어야 할때가 있습니다.
// => 아래 코드!!! (중요합니다. , C++뿐 아니라 모든 언어에 있는 개념)
//		shallow copy : 
//				클래스 안에 포인터 있을 때 위험
//		배열이 있으면 그냥 통체로 복사되긴 함

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
};

	

int main()
{
	Vector v1(4, 0); // *ptr = 100, sz=4 라고 하고

	Vector v2 = v1; // 컴파일러는 *ptr & sx 둘다 복사
						// v2 ; *ptr = 100, sz=4 이렇게 복사

	delete v1; // *ptr=100 한번 제거
	delete v2; //  *ptr=100 동일한 메모리 2번 제거 > 버그
	
}
