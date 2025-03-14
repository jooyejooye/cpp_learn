#include <iostream>

// 2. Ŭ���� ���𿡴� ��� �Լ��� ���� �ְ�, ��� �Լ��� ������ Ŭ���� �ܺο��� �ۼ� �ϴ� ���
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

Vector::Vector(int size, int value ) :sz(size)  // default parameter �� ����� ���� �Ѵ� ���� �� ���ʿ� ������ �ȵ�
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

int main()
{
	Vector v1(5);
	v1.at(0) = 7;
	std::cout << v1.at(0) << std::endl;
}


