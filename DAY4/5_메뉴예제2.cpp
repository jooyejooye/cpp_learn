#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
/*
��ü ���� ���α׷����� �ٽ� ����
=> ���α׷��� ��� ��Ҹ� "��ü" ��� ���� �ϴ� ��
=> �׷��� ��ü����
*/

class Menuitem
{
	std::string title;
	int id;
	std::string shortcut; // ���߿� ������ �߰�
public:
	Menuitem( const std::string& title, int id)
		: title(title), id(id) {};
	void command() 
	{
		std::cout << get_title() << " �Ŵ� ���õ�\n";
		_getch(); // �ƹ� Ű�� ���� �� ���� ��� ����, ������
	};
	std::string get_title() const { return title; }
};
int main()
{
	Menuitem m1("���", 11);
	Menuitem m2("���", 12);
	Menuitem m3("�쵿", 13);

	m1.command();// ��� �޴� ����
	m2.command();// ��� �޴� ����
	m3.command();// �쵿 �޴� ����
}
