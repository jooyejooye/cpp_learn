#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
/*
객체 지향 프로그래밍의 핵심 개념
=> 프로그램의 모든 요소를 "객체" 라고 생각 하는 것
=> 그래서 객체지향
*/

class Menuitem
{
	std::string title;
	int id;
	std::string shortcut; // 나중에 복습시 추가
public:
	Menuitem( const std::string& title, int id)
		: title(title), id(id) {};
	void command() 
	{
		std::cout << get_title() << " 매뉴 선택됨\n";
		_getch(); // 아무 키나 누를 때 까지 잠시 정지, 디버깅용
	};
	std::string get_title() const { return title; }
};
int main()
{
	Menuitem m1("김밥", 11);
	Menuitem m2("라면", 12);
	Menuitem m3("우동", 13);

	m1.command();// 김밥 메뉴 선택
	m2.command();// 라면 메뉴 선택
	m3.command();// 우동 메뉴 선택
}
