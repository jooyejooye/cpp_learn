#include <iostream>
// step4 : ����ڵ��� ���ϰ� ����� �� �ֵ��� ������ ��� �Լ� ����
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

	int& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (newsize > sz) // Ŀ���� ���
		{
			int* tmp = new int[newsize];
			memcpy(tmp, ptr, sizeof(int) * sz);
			delete[] ptr; // ptr�� �����ϴ°� �ƴ϶� ptr�� ����Ű�� �޸� ����
			ptr = tmp;
			sz = newsize;
			std::cout << "resize " << sz << std::endl;
		}
		else // �۾����� ��� > ���� �� �� ������.
		{
			sz = newsize;
		}
	}
	int size() { return sz; }
	bool empty() { return sz == 0; }
};

int main()
{
	Vector v(4, 0);
	v.at(2) = 10;
	std::cout << v.at(2) << std::endl;
	v.resize(10);
	std::cout << v.size() << std::endl;

}