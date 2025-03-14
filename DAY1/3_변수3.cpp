#include <iostream>

struct Point
{
	int x, y;
};
void foo(int n)    {} 
void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	foo(3);
	goo(p);
	goo({2,3}); // point pt = {2,3}
	std::cout << "this is 3-3";

}

Point hoo()
{
	return { 1,2 };
}





