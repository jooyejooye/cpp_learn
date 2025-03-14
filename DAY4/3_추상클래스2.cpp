#include <iostream>
#include <vector>

class Shape
{
	int color = 0;
public:
	virtual ~Shape() {};
	void set_color(int c) { color = c; }
	// ���� �Լ� :		 �Ļ� Ŭ������ override ���� ������ �⺻ ���� �����ְڴٴ� ��
	// ���� ���� �Լ� : �Ļ� Ŭ������ �����ڿ��� �ݵ�� ��ӵ� �Լ��� ������ �����ϴ� ��
	// ���� ���� �Լ��� 1���� ������ �߻� Ŭ����
	
	//virtual void draw() const { std::cout << "draw shape\n"; }
	virtual void draw() const = 0;

	// �Ʒ�ó�� �ߴٸ�
	//		=> ��� ���� �����ڴ� �ݵ�� �Ʒ� �Լ��� �����ؾ� �մϴ�
	virtual int get_area() const = 0; 

	// �Ʒ�ó�� �ߴٸ� ��� ���� Ŭ������ �ݵ�� ������ �ʿ�� ����
	virtual int get_area() const { return -1; }
};

class Rect : public Shape
{
public:
	virtual void draw() const override { std::cout << "draw rect\n"; }
};
class Circle : public Shape
{
public:
	virtual void draw() const override { std::cout << "draw circle\n"; }
};


int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd = 0;
		std::cin >> cmd;

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);

		else if (cmd == 9)
		{
			for (auto s : v)
			{
				s->draw(); 
			}
		}
	}
}

