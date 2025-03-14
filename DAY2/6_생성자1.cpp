// 5_������1.cpp - 80 page
#include <iostream>
#include <string>

// 1. ��� ��� �����Ͱ� public�� ������
//		C�� ����ü�� ����
//		���� �Ʒ�ó�� ����ü ����ȭ �������� �ʱ�ȭ ����
// 
class Person
{
public:
	std::string name;
	int  age;
};

class Person2
{
private:
	std::string name;
	int  age;
public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

class Person3
{
private:
	std::string name;
	int  age;
public:
	Person3(const std::string& n, int a)
	{
		name = n;
		age = a;
	}

};

int main()
{
	
// 1. ��� ��� �����Ͱ� public�� ������
//		C�� ����ü�� ����
//		���� �Ʒ�ó�� ����ü ����ȭ �������� �ʱ�ȭ ����
	Person p = { "kim", 28 };
// 2. ��� �����Ͱ� private�� �ִٸ� ��ó�� �ʱ�ȭ �ȵ�
//		��� �Լ��� �ʱ�ȭ �ʿ�

	Person2 p2; // �ʱ�ȭ ���� ���� ��ü�� ���� ����� 
	p2.init("jooye", 22); // �ʱ�ȭ �Լ� ȣ��


	// 3. �� �ڵ� ���ٴ� ��ü�� �����ϸ鼭 �ʱ�ȭ �ϴ� ���� ����
	Person3 p3("kim", 33);  // ������ ��� �Լ��� ȣ��˴ϴ�.

}



