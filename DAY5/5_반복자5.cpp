// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   c = { 11,22,3,4,5,6,7,8,9,10 };
//	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };


//	auto p1 = c.begin(); 
//	auto p2 = c.end();
	// ���ݺ��� ( reverse iterator ) ������.
	auto p1 = c.rbegin(); 
	auto p2 = c.rend();  

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

}

