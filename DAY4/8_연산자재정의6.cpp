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
		if (newsize > sz) // Ŀ���� ���
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
	// [ ] ������ ������
	//	=> ��ü�� �迭 ó�� ��밡���ϰ� �ϱ� ���� ���
	//	=> ��� �Լ��θ� ���� ���� (non-member �� �ȵ�)
	//	=> ��ȣ�� ���ʿ� �� �� �ְ� �ϱ� ���� reference�� ��ȯ
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