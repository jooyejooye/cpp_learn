// 예제1     149 page
#include <iostream>
#include <vector>
/*
4. 모든 파생 클래스(도형) 의 공통의 특징은 반드시 기반 클래스 (shape) 에도 있어야 한다

문법적인 규칙이 아닌 디자인 원칙
그래야 shape*로 해당 특징(draw) 를 사용 할 수 있다

5. 기반 클라스의 멤버 함수중에서 파생 클래스가 다시 만들게 되는 것은 반드시 
*/
class shape
{
	int color = 0; int width = 1;
public:
	virtual void draw() const { std::cout << "draw shape\n"; }
	virtual int get_area() const { return -1; }
	void set_color(int c) {
		color = c;
	}
};

class Rect : public shape
{
	// int x,y,w,h, 생성자 등등 있다고 가정
public:
	virtual void draw() const { std::cout << "draw rect\n"; }
};

class Circle : public shape
{
	// int x,y,w,h, 생성자 등등 있다고 가정
public:
	virtual void draw() const { std::cout << "draw circle \n"; }
};
class Triangle : public shape
{
	// int x,y,w,h, 생성자 등등 있다고 가정
public:
	virtual void draw() const { std::cout << "draw Triangle \n"; }
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
		else if (cmd == 3) v.push_back(new Triangle);
		else if (cmd == 9)
		{
			for (auto s : v)
				s->draw();   // 이 한줄의 코드는  "동일한 표현식(코드) 이지만 상황 (실제 객체) 에 따라 다르게 동작함
			// => 다형성 (Polymorphism)

		}
		else break;
		
	}

}
/*
객체 지향의 3가지 특징
1. 캡슐화 (Private, public)
2. 상속
3. 다형성


Shape* s = &Rect;
s 로는 Rect 가 추가한 멤버에 접근 안됩니다

1. rect 가 추가한 멤버 데이터 접근 : 멤버 데이타는 private에 있음 > s를 사요해서 외부에서 접근 할 이유 없음

2. rect 가 추가한 멤버 함수 접근	 : shape 에도 있도록 가상함수를 설계하고

s-> draw()
Rect 의 draw 안에서 rect 가 추가한 멤버 접근 하는 것은 문제 없음

Q : 이거 템플릿으로 안되나요? > 위 코드는 실행시간에 결정됨으로 안됨, 템플릿은 컴파일 시간에 확정되어야함
*/
