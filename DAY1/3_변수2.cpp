#include <iostream>

// 26page - 중요한 변화.!

struct Point
{
	int x, y;
};
int main()
{
	// C언어 C++98 시절 초기화의 문제점
	/*
	변수 종류에 따라 초기화 방법이 다 다름
	*/
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point p1 = { 1,2 };

	// Uniform initialization 문법 > c++11 도입 
	/*
	모든 변수는  {} 로 초기화 가능
	*/
	int n2 = { 10 };
	int x2[3] = { 1,2,3 };
	Point p2 = { 1,2 };

	
	/*
     = 이 있어도 되고 없어도 됨
	 direct(직접) initialization : = 이 없는 경우
	 copy(복사) initialization : = 이 있는 경우
	 */
	int n3  { 10 };
	int x3[3]  { 1,2,3 };
	Point p3  { 1,2 };


}



