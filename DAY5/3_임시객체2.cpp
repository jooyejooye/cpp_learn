#include <iostream>

void draw_pixel(int x, int y) {}

int main()
{
	// 1, 2,�� ���� �׸��� �ʹ�

	// 1. ���ڸ� literal�� ���� >>>>> ���� ���� �ʿ� ���� �� good
	draw_pixel(1, 2);
	// 2. ������ ���� ����
	int x = 1, y = 2;
	draw_pixel(x, y);
}