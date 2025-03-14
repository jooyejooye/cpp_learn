// 10_캐스팅1.cpp    49 page
#include <iostream>

/*
핵심
1. c언어 캐스팅은 한가지 방법만 존재
2. 어떤 위험한 캐스팅 코드가 개발자 의도인지 실수인지 알 수 없음
3. 캐스팅 방법을 한가지가 아닌 여러개를 제공해서 > 용도에 맞게 사용하면???

*/
int main()
{
	//int n = 3;

	//double* p = &n; // error

	//double* p = (double*)&n; // ok
	//*p = 3.4;
	//std::cout << "p: " << p << "        *p " << *p;

	// 2. 상수성 제거
	const int c = 10;
	int* p1 = (int*)&c;
	*p1 = 20;
	std::cout <<"c: " << c << std::endl; // 10
	std::cout << "*p1: " << *p1 << std::endl; //20 : 컴파일러 마다 다름


}
