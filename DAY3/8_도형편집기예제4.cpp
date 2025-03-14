// 예제1     149 page
#include <iostream>
#include <vector>
/*
2. 모든 도형은 공통의 특징(color)이 있음 > 기반 클래스 만들어서 관리하라

3. 기반 클래스 shape 이 있다면
-> 모든 도형을 한개의 컨테이너에 같이 보관할 수 있다.
-> 객체지향 디자인에서 아주 널리 사용되는 개념! 중요!
*/
class shape
{
	int color = 0; int width = 1;
};

class Rect : public shape
{
	// int x,y,w,h, 생성자 등등 있다고 가정
public:
	void draw() const { std::cout << "draw rect\n"; }
};

class Circle : public shape
{
	// int x,y,w,h, 생성자 등등 있다고 가정
public:
	void draw() const { std::cout << "draw circle \n"; }
};

int main()
{
	std::vector<shape*> v;
	while (1)
	{
		int cmd;
		std::cin >> cmd;
		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			// 1. 해결책 Rect* , Circle* 로 캐스팅
			//		s가 가리키는 곳이 Rect 인지 Circle인지 조사해야함 > 4일차에 배울 예정 
			//		신규 클라스 생성할 때 마다 코드 바꿔야 함 >> 나쁜 코드!
			for (auto s : v) 
				if (typeid(s ) == Rect*)
				{
					static_cast<Rect*>(s)->draw();
				}
				else if (typeid(s) == Circle*)
				{
					static_cast<Circle*>(s)->draw();
				}
				
		}
	}

}

/*
OCP 원칙 : Open Close Principle (개방 폐쇄의 원칙)
기능 확장에는 열려있고 (Open, 나중에 클래스가 추가되어도)
코드 수정에는 닫혀있어야 (Close, 기존 코드는 수정되지 않도록)
만들어야 한다는 원칙 (principle)

*/
