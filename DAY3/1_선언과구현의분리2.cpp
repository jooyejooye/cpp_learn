#include <iostream>

// 2. 클래스 선언에는 멤버 함수는 선언만 넣고, 멤버 함수의 구현은 클래스 외부에서 작성 하는 방법
class Vector
{
	int* ptr;
	int sz;
public:
	Vector(int size, int value = 0);
	~Vector();
	int& at(int idx);
	void resize(int newsize);
	int size();
	bool empty();

};

Vector::Vector(int size, int value ) :sz(size)  // default parameter 는 선언과 구현 둘다 있을 때 양쪽에 있으면 안됨
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

int main()
{
	Vector v1(5);
	v1.at(0) = 7;
	std::cout << v1.at(0) << std::endl;
}


