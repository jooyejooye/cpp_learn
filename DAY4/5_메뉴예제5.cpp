#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

/*
C언어는 메모리 구조(포인터 등) 을 이해하기 위해 메모리 그림을 그리며 공부

객체지향 디자인을 이해하려면 클래스 구조(Diagram)을 그려야 함

MenuItem

PopupMenu 
	v : vector<Menuitem * >  // popupmenu 도 받고 싶음 >> 모든 메뉴의 공통의 기반 클래스 만들자

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
		std::cout << get_title() << "메뉴 선택됨\n";
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
			std::cout << sz + 1 << ". 종료\n";
			std::cout << "메뉴를 선택하세요 >> ";
			int cmd;
			std::cin >> cmd;
			if (cmd == sz + 1) 
				break;
			if (cmd < 1 || cmd > sz + 1) 
				continue;

			v[cmd - 1]->command(); 
			/* 다형성 [ polymorphism ]
			* v[cmd - 1] 이 가리키는 실제 객체가 menuitem 인지 pupmenu 인지 에 따라 다르게 동작
			*/
		}

	}
};



int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("참치 김밥", 12);
	MenuItem m3("돈까스 김밥", 13);
	MenuItem m4("샐러드 김밥", 13);
	PopupMenu kimbab("김밥류");
	kimbab.add(&m1);
	kimbab.add(&m2);
	kimbab.add(&m3);

	// ---------------------------------------------

	MenuItem m8("라면", 21);
	MenuItem m9("우동", 22);

	PopupMenu pm("오늘의 점심 메뉴");
	pm.add(&kimbab);// 핵심!!
	pm.add(&m8);
	pm.add(&m9);

	pm.command();
}