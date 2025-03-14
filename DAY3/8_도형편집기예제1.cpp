﻿// 예제1     149 page
#include <iostream>
#include <vector>

/*
파워포인트 같은 프로그램을 객체지향적으로 만들어 봅시다
1. 모든 도형을 타입(클래스) 로 설계하자
*/

class Rect
{
	// int x,y,w,h, 생성자 등등 있다고 가정
public:
	void draw() const { std::cout << "draw rect\n"; }
};

class Circle
{
	// int x,y,w,h, 생성자 등등 있다고 가정
public:
	void draw() const { std::cout << "draw circle \n"; }
};

int main()
{
	std::vector<Rect*> v1;
	std::vector<Circle*> v2;

}



