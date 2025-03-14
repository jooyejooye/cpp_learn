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
	PopupMenu* root = new PopupMenu("ROOT");
	PopupMenu* pm1 = new PopupMenu("색상 변경");
	PopupMenu* pm2 = new PopupMenu("해상도 변경");

	root->add(pm1);
	root->add(pm2);

	pm1->add(new MenuItem("RED", 11));
	pm1->add(new MenuItem("GREEN", 12) );
	pm1->add(new MenuItem("BLUE", 13));

	pm2->add(new MenuItem("HD", 12));
	pm2->add(new MenuItem("FHD", 13));

	root->command();

}
// 현실세계에서 세상은 다양한 객체(사람, 자동차, 컴퓨터, 기차등...)의 집합 입니다.

// 객체 지향 프로그래밍 관점에서 프로그래밍 이란 ?

// 1. 객체를 생성하고
// 2. 객체간의 관계를 설정하고
// 3. 객체간의 메세지를 주고 받는 과정이다(서로의 멤버 함수 호출)

// 4. 프로그램의 기본 단위는 "함수"가 아니라 "클래스" 이다.

// 장점 : 유연성이 좋고, 유지보수가 쉽다.

// 단점 : 메모리 사용량이 C 보다 많고, 복잡하다.
//		  결정적으로.. 어렵다!!

/*
C++

LV1 : auto template referene 등을 이해 해서 사용할 수 있는 능력
LV2 : std::string, vector 등 미리 만들어진 표준 라이브러리를 사용하는 능력
LV3 : date 와 같은 클래스를 혼자 만들 수 있는 능력 => 클래스 문법의 이해
LV4 : 위 menu 같은 라이브러리를 설계할 수 있는 을겨
		=> 단순 문법이 아닌 객체지향 설계에 대한 학습이 필요
		=> "디자인 패턴" 과정 참고
*/