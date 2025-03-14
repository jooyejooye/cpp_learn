#include <iostream>
// step5 : T �Ӹ� �ƴ϶� �ٸ� Ÿ�Ե� ���� �����ϰ�
//		Ŭ������ �ƴ� Ŭ������ ����� Ʋ(TEMPLATE)�� ����
//		�Լ� �Ӹ� �ƴ϶� Ŭ������ ���ø����� ���� �� ����
template<typename T>
class Vector
{
private:
	T* ptr;
	int sz;
public:
	Vector(int size, T value)
	{
		sz = size;
		ptr = new T[sz];
		for (int i = 0; i < sz; i++) { ptr[i] = value; }
	}
	~Vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (newsize > sz) // Ŀ���� ���
		{
			T* tmp = new T[newsize];
			memcpy(tmp, ptr, sizeof(T) * sz);
			delete[] ptr; // ptr�� �����ϴ°� �ƴ϶� ptr�� ����Ű�� �޸� ����
			ptr = tmp;
			sz = newsize;
			std::cout << "resize " << sz <<"\nsize of: "<< sizeof(T) << std::endl;
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
	Vector<double> v(4, 0.8);
	//v.at(2) = 10;
	std::cout << v.at(0) << std::endl;
	v.resize(10);
	std::cout << v.size() << std::endl;

}