#include <iostream>

void draw_pixel(int x, int y) {}

int main()
{
	// 1, 2,에 점을 그리고 싶다

	// 1. 인자를 literal로 전달 >>>>> 변수 만들 필요 없을 떄 good
	draw_pixel(1, 2);
	// 2. 변수를 만들어서 전달
	int x = 1, y = 2;
	draw_pixel(x, y);
}