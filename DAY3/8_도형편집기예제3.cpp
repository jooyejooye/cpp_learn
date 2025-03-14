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
		if			(cmd == 1) v.push_back(new Rect);
		else if		(cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto s : v) // s 는 shape 입니다
				s->draw();  // error
		}
	}

}
/*
s-> draw() : s 는 shape 포인터 인데, shape는 draw없다
shape* 로는 shape 의 멤버만 접근 가능, rect circle이 추가한 멤버 접근 안됨


*/


