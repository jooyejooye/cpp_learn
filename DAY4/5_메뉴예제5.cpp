#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

/*
C���� �޸� ����(������ ��) �� �����ϱ� ���� �޸� �׸��� �׸��� ����

��ü���� �������� �����Ϸ��� Ŭ���� ����(Diagram)�� �׷��� ��

MenuItem

PopupMenu 
	v : vector<Menuitem * >  // popupmenu �� �ް� ���� >> ��� �޴��� ������ ��� Ŭ���� ������

Basemenu 
	menuitem
	popup menu
*/
class Basemenu
{
	std::string title;
public:
	Basemenu(const std::string& title) : title(title) {}
	virtual ~ Basemenu(){}
	std::string get_title() const { return title; }
	virtual void command() = 0;
};
class MenuItem : public Basemenu
{
	int id;
public:
	MenuItem(const std::string& title, int id)
		: Basemenu(title), id(id) {	}	
	virtual void command() override
	{
		std::cout << get_title() << "�޴� ���õ�\n";
		_getch();
	}
};

class PopupMenu : public Basemenu
{
	std::vector<Basemenu*> v;
public:
	PopupMenu(const std::string& title) : Basemenu(title) {}

	void add(Basemenu* m) { v.push_back(m); }
	virtual void command() override
	{
		while (1)
		{
			system("cls"); 
			auto sz = v.size();
			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". ����\n";
			std::cout << "�޴��� �����ϼ��� >> ";
			int cmd;
			std::cin >> cmd;
			if (cmd == sz + 1) 
				break;
			if (cmd < 1 || cmd > sz + 1) 
				continue;

			v[cmd - 1]->command(); 
			/* ������ [ polymorphism ]
			* v[cmd - 1] �� ����Ű�� ���� ��ü�� menuitem ���� pupmenu ���� �� ���� �ٸ��� ����
			*/
		}

	}
};



int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("��ġ ���", 12);
	MenuItem m3("��� ���", 13);
	MenuItem m4("������ ���", 13);
	PopupMenu kimbab("����");
	kimbab.add(&m1);
	kimbab.add(&m2);
	kimbab.add(&m3);

	// ---------------------------------------------

	MenuItem m8("���", 21);
	MenuItem m9("�쵿", 22);

	PopupMenu pm("������ ���� �޴�");
	pm.add(&kimbab);// �ٽ�!!
	pm.add(&m8);
	pm.add(&m9);

	pm.command();
}