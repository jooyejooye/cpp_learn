// 4_����������1 - 76page
#include <iostream>
#include <string>

// C++ �� ����������

class Person
{
private:					
	std::string name;
	int  age;

public: // �̿����� ����� ��𿡼��� ���� ����
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
private:
};


// C++ ���� �ٸ� ������ ��� ���� ���� ������ ǥ��
class Person
{
private std::string name;
private int  age;

public void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
private:
};
