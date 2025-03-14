// 2_���������1.cpp
#include <iostream>
// �����Ϸ� ����ȭ ������ ������ "���� ������" ȣ����
// Ȯ���Ϸ��� 
// g++ �� �Ʒ� ó�� "����ȭ ���� ����" �� �ɼ� ����
// 
// f5() ����� ������ �Ʒ�ó��
// g++ aaa.cpp -fno-elide-constructors  
class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}  
	Point(int a, int b) : x(a), y(b) {}  
	// ���� ȣ�� �Ǵ��� Ȯ�� ���ؼ� ���� �����ڿ��� �α�
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) { } // call by value : ���纻 ����
void f2(Point& p) {} // call by reference : ���纻 ���� �ȵ�

Point pt(1, 1);

Point  f3() { return pt; }	// return by value : return �� ���纻���� 
Point& f4() { return pt; }	// return by reference : return�� ��������

int main()
{
	Point p1(1, 2);		
	// ���� �����ڰ� ���Ǵ� ��� 3����
	// 1. �ڽŰ� ���� �� Ÿ���� ��ü�� �ʱ�ȭ �� ��
//	Point p2(p1);
//	Point p3 = p1;

	// 2. �Լ� ���ڷ� call by value�� ��� �� ��
//	f1(p1); // call by value, Point p = p1 �ǹ� , �� ���纻 ���� �� ���� ������ ȣ��
//	f2(p1); // call by reference 

	// 3. �Լ��� ��ü�� ������ ��ȯ �� �� ( return by value )
//  f3();
//	f4();	

	f5();
}	
//------------------------
Point f5()
{
	Point p1(1, 1);

	return p1;	// 1. p1 �� ����ؼ� ���Ͽ� ���纻 �����
	// 2. p1 �� �ı�(�Ҹ��� ȣ���)
	// 3. ���纻 ��ȯ
}
 // ���ϵ� ���纻�� �� ������ ������ �ı���.

// �Ʒ� �ڵ带 ���� ������
// => �߸��� �ڵ� �Դϴ�.
// => ���������� ���� ���� ��ȯ�ϸ� �ȵ˴ϴ�.
// => �ı����� ������(��������, static ��������, �������Ÿ)��
//    ���� ��ȯ �����մϴ�. ( �ӽð�ü���� ���� �ڼ���)
Point& f6()
{
	Point p1(1, 1);
	return p1;
}