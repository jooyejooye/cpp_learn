#include <iostream>

class Car
{
	int color = 0;
	// C++17 �� inline static �� ����ϸ� 
	// static ��� ������ �ܺ����� �ʿ� ����
	// �ʱ�ȭ�� ���⼭ ����//
	inline static int cnt = 0;
public:

	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};



int main()
{


}

