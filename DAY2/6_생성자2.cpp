// 5_������1.cpp - 80 page
#include <iostream>
#include <string>


class Person
{
private:
	std::string name;
	int  age;

public:
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
		std::cout << "������1 \n";
	}
	Person()
	{
		name = "no name";
		age = 0;
		std::cout << " ������ 2 \n";
	}

	~Person() { std::cout << " �Ҹ��� \n"; }
	// �Ҹ���
		//	~Ŭ���� �̸� �� �Լ�
		// ��ü�� �ı��� �� ȣ��
		// ��ȯ�� ���� ���ڵ� ���� �� ����
		// ���� �Ѱ��� ���� �� �ִ�

};

int main()
{

	Person p;
	Person p1("joo",11);
	Person p2;
	// <== p1, p2 �ı�, �Ҹ��� ȣ��� 
}

