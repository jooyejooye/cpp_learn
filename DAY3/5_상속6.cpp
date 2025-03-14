#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age) : name(name), age(age) {}
};

class Student : public People
{
	int id = 0;
public:
	Student(const std::string& name, int age, int new_id) : People(name, age) , id(id)
	{
		std::cout << "done" << std::endl;
	}
};

/*
1. people ���� �Ļ�� student ���弼��
2. int id ��� ������ �߰��ϼ���
3. student ������ �������� ������
4. main ���� student ��ü �����غ�����
*/

int main()
{
	Student me("jooye",27, 3);
	Student s1("bona", 22, 4);
}



