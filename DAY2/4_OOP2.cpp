// 3_OOP1 - 72page
#include <iostream>

// ��ü ���� ���α׷����� �ٽ� #1. �ʿ� Ÿ�� ���� ����
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// ���纻�� ���� ������� ŭ : const reference
int getRectArea(const Rect& s)
{
	return (s.right - s.left) * (s.bottom - s.top);
}

void drawRect(const Rect& s)
{
	std::cout << "draw rect" << std::endl;

}

int main()
{
	Rect rc = { 1,1,2,5 };
	int n1 = getRectArea(rc);
	drawRect(rc);
}