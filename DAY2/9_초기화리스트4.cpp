#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& n, int a) 
	{
		// call std::string::string() -> ��  name�� ���ؼ� ����Ʈ ������ ȣ��
		name = n;
		// ���� > 2���� �Լ� ȣ��� name �� ���� ���� ��
		// std::string::string
		// name = n �� �ǹ�
		age = a;
	}
};

Person1 p1{ "kim", 20 };

class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a) : name{n}, age{a}
	{
		// call std::string::string(n) : �� ���� �Ѱ� ������ ȣ��, ������ ȣ�� 1ȸ�� �ʱ�ȭ �� ��

		// ����� �ʿ��ϴٸ� ���� �� ���
	}
};

Person2 p2{ "kim", 20 };

/*
��� : �����ڿ��� ��� �ʱ�ȭ �� �� : 
	��� �ʱ�ȭ ����Ʈ���� �ϴ� ���� ����
	������ �ƴ� ��¥ �ʱ�ȭ ( �����ڷ� �ʱ�ȭ �� ��)

*/

class Person3
{
	std::string name;
	int age;
public:
	Person3(const std::string& n, int a) : name{ n }, age{ a }
	{
		// call std::string::string(n) : �� ���� �Ѱ� ������ ȣ��, ������ ȣ�� 1ȸ�� �ʱ�ȭ �� ��

		// ����� �ʿ��ϴٸ� ���� �� ���
		 age = a; 
	}
};


int main() {
	Person3 p3{ "kim", 200 };

}