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
		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			// 1. �ذ�å Rect* , Circle* �� ĳ����
			//		s�� ����Ű�� ���� Rect ���� Circle���� �����ؾ��� > 4������ ��� ���� 
			//		�ű� Ŭ�� ������ �� ���� �ڵ� �ٲ�� �� >> ���� �ڵ�!
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
OCP ��Ģ : Open Close Principle (���� ����� ��Ģ)
��� Ȯ�忡�� �����ְ� (Open, ���߿� Ŭ������ �߰��Ǿ)
�ڵ� �������� �����־�� (Close, ���� �ڵ�� �������� �ʵ���)
������ �Ѵٴ� ��Ģ (principle)

*/
