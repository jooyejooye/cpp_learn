// nullptr1.cpp    24 page
#include <iostream>
int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok >> 하지만 나쁨

	//int* p2 = n1; // error
	/*
	리터럴 0은 포인터로 암시적 형변환 되지만
	0으로 초기화된 정수형 변수는 포인터로 변환 될 수 없다.
	*/
	int* p3 = nullptr; // c++11에서 포인터 의미의 0을 추가함
	//int n4 = nullptr; // error nullptr 는 포인터 초기화에만 사용 가능
	std::cout << "3-7 " <<" jooye";
	
}
