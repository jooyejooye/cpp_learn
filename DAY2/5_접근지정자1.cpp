// 4_����������1 - 76page
#include <iostream>
#include <string>

// ĸ��ȭ( Encapsulation)
//		��ü�� ����(���������) �� private �� ����
//		�ܺο� �߸��� ������� ���� ��ü�� �Ҿ��� ���� ���� ���´�
//		��ü�� ���´� �� ���ǵ� ��� �Լ��� ����ؼ��� ���� ����
// 
// ���� ������ : private, public
//		��κ� ��ü���� �� �����ϴµ�, ���̽��� ���� ����
// ��

struct Person
{
private:					// private ���� ������
	std::string name;	// �� ������ ����� ��� �Լ������� ���� ����
	int  age;		

public: // �̿����� ����� ��𿡼��� ���� ����
	void set_age(int a)
	{
		if(a>0 && a<150)
			age = a;
	}

};

int main()
{
	Person p;

	p.set_age(-10) ; 

				 
}
