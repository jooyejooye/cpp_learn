// ����1     149 page
#include <iostream>
#include <vector>
/*
2. ��� ������ ������ Ư¡(color)�� ���� > ��� Ŭ���� ���� �����϶�

3. ��� Ŭ���� shape �� �ִٸ�
-> ��� ������ �Ѱ��� �����̳ʿ� ���� ������ �� �ִ�.
-> ��ü���� �����ο��� ���� �θ� ���Ǵ� ����! �߿�!
*/
class shape
{
	int color = 0; int width = 1;
};

class Rect : public shape
{
	// int x,y,w,h, ������ ��� �ִٰ� ����
public:
	void draw() const { std::cout << "draw rect\n"; }
};

class Circle : public shape
{
	// int x,y,w,h, ������ ��� �ִٰ� ����
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
			for (auto s : v) // s �� shape �Դϴ�
				s->draw();  // error
		}
	}

}
/*
s-> draw() : s �� shape ������ �ε�, shape�� draw����
shape* �δ� shape �� ����� ���� ����, rect circle�� �߰��� ��� ���� �ȵ�


*/


