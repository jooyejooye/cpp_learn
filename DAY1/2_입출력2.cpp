﻿// 3_입출력2.cpp - 18 page
#include <iostream>

// io manipulator(입출력 조정자 함수)
// => 입출력의 형태를 지정할때 사용하는 함수들.
// => std::dec, std::hex 는 <iostream> 에 있지만 대부분은 아래 헤더에
#include <iomanip>

void main()
{
	int n = 10;
	std::cout << n << std::endl; // 10  즉, 10진수로 출력
	std::cout << std::hex << n << std::endl; // a, 즉, 16진수로 출력
	std::cout << std::dec << n << std::endl; // 10, 다시 10진수로

	std::cout << std::setw(10) << n << std::endl; // 10 자리에 맞추서 출력

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;


	double d = 12.123456789;
	std::cout << d << std::endl; // 몇자리 까지 출력되는지 확인해 보세요
};