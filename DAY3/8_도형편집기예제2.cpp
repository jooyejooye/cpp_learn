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

class Rect: public shape
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
	std::vector<shape*> v;;

}



