// 4_����������1 - 76page
#include <iostream>
#include <string>

// struct : ���� ������ default : public
// class  : ���� ������ default : private
// 
// C++ : Class & struct ������ ���� �ϳ� > ���������� default ���� �ٸ�
//		C#, Java : class struct �ſ� �ٸ�
//		Rust : C++ ��ü �Ѵٰ� ����, Class ����, struct ������ ��� ���� ����
// 

class Person
{
//private:					
	std::string name;	
	int  age;

public: // �̿����� ����� ��𿡼��� ���� ����
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}

};

int main()
{
	Person p;

	p.set_age(-10);
	


}
