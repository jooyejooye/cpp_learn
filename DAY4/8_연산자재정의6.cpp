#include <iostream>

class Vector
{
private:
	int* ptr;
	int sz;
public:
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];
		for (int i = 0; i < sz; i++) { ptr[i] = value; }
	}
	~Vector() { delete[] ptr; }

	void resize(int newsize)
	{
		if (newsize > sz) // 커지는 경우
		{
			int* tmp = new int[newsize];
			memcpy(tmp, ptr, sizeof(int) * sz);
			delete[] ptr; 
			ptr = tmp;
			sz = newsize;
			std::cout << "resize " << sz << std::endl;
		}
		else 
		{
			sz = newsize;
		}	
	}
	int& at(int idx) { return ptr[idx]; }
	// [ ] 연산자 재정의
	//	=> 객체를 배열 처럼 사용가능하게 하기 위해 사용
	//	=> 멤버 함수로만 구현 가능 (non-member 는 안됨)
	//	=> 등호의 왼쪽에 올 수 있게 하기 위해 reference로 반환
	//  v[0] = 12
	int& operator[](int idx) { return ptr[idx]; }
};

int main()
{
	Vector v(4, 0);
//	v.at(2) = 10;
	v[0] = 10; // v.operator[](0) = 10;
	std::cout << v[0] << std::endl;
	v.operator[](2) = 22;
	std::cout << v[2] << std::endl;
	v.resize(8);
}