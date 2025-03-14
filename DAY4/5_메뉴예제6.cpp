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
	virtual ~Basemenu() {}
	std::string get_title() const { return title; }
	virtual void command() = 0;
};
class MenuItem : public Basemenu
{
	int id;
public:
	MenuItem(const std::string& title, int id)
		: Basemenu(title), id(id) {
	}
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
	PopupMenu* root = new PopupMenu("ROOT");
	PopupMenu* pm1 = new PopupMenu("���� ����");
	PopupMenu* pm2 = new PopupMenu("�ػ� ����");

	root->add(pm1);
	root->add(pm2);

	pm1->add(new MenuItem("RED", 11));
	pm1->add(new MenuItem("GREEN", 12) );
	pm1->add(new MenuItem("BLUE", 13));

	pm2->add(new MenuItem("HD", 12));
	pm2->add(new MenuItem("FHD", 13));

	root->command();

}
// ���Ǽ��迡�� ������ �پ��� ��ü(���, �ڵ���, ��ǻ��, ������...)�� ���� �Դϴ�.

// ��ü ���� ���α׷��� �������� ���α׷��� �̶� ?

// 1. ��ü�� �����ϰ�
// 2. ��ü���� ���踦 �����ϰ�
// 3. ��ü���� �޼����� �ְ� �޴� �����̴�(������ ��� �Լ� ȣ��)

// 4. ���α׷��� �⺻ ������ "�Լ�"�� �ƴ϶� "Ŭ����" �̴�.

// ���� : �������� ����, ���������� ����.

// ���� : �޸� ��뷮�� C ���� ����, �����ϴ�.
//		  ����������.. ��ƴ�!!

/*
C++

LV1 : auto template referene ���� ���� �ؼ� ����� �� �ִ� �ɷ�
LV2 : std::string, vector �� �̸� ������� ǥ�� ���̺귯���� ����ϴ� �ɷ�
LV3 : date �� ���� Ŭ������ ȥ�� ���� �� �ִ� �ɷ� => Ŭ���� ������ ����
LV4 : �� menu ���� ���̺귯���� ������ �� �ִ� ����
		=> �ܼ� ������ �ƴ� ��ü���� ���迡 ���� �н��� �ʿ�
		=> "������ ����" ���� ����
*/