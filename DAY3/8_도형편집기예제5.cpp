// ����1     149 page
#include <iostream>
#include <vector>
/*
4. ��� �Ļ� Ŭ����(����) �� ������ Ư¡�� �ݵ�� ��� Ŭ���� (shape) ���� �־�� �Ѵ�

�������� ��Ģ�� �ƴ� ������ ��Ģ
�׷��� shape*�� �ش� Ư¡(draw) �� ��� �� �� �ִ�

5. ��� Ŭ���� ��� �Լ��߿��� �Ļ� Ŭ������ �ٽ� ����� �Ǵ� ���� �ݵ�� 
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
	// int x,y,w,h, ������ ��� �ִٰ� ����
public:
	virtual void draw() const { std::cout << "draw rect\n"; }
};

class Circle : public shape
{
	// int x,y,w,h, ������ ��� �ִٰ� ����
public:
	virtual void draw() const { std::cout << "draw circle \n"; }
};
class Triangle : public shape
{
	// int x,y,w,h, ������ ��� �ִٰ� ����
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
				s->draw();   // �� ������ �ڵ��  "������ ǥ����(�ڵ�) ������ ��Ȳ (���� ��ü) �� ���� �ٸ��� ������
			// => ������ (Polymorphism)

		}
		else break;
		
	}

}
/*
��ü ������ 3���� Ư¡
1. ĸ��ȭ (Private, public)
2. ���
3. ������


Shape* s = &Rect;
s �δ� Rect �� �߰��� ����� ���� �ȵ˴ϴ�

1. rect �� �߰��� ��� ������ ���� : ��� ����Ÿ�� private�� ���� > s�� ����ؼ� �ܺο��� ���� �� ���� ����

2. rect �� �߰��� ��� �Լ� ����	 : shape ���� �ֵ��� �����Լ��� �����ϰ�

s-> draw()
Rect �� draw �ȿ��� rect �� �߰��� ��� ���� �ϴ� ���� ���� ����

Q : �̰� ���ø����� �ȵǳ���? > �� �ڵ�� ����ð��� ���������� �ȵ�, ���ø��� ������ �ð��� Ȯ���Ǿ����
*/
