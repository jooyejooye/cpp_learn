#include <iostream>

// 26page - 중요한 변화.!

int main()
{
	// 가독성 측면에서 굿 : 안정성 위험
	int n1 = 3.4; // 일단 실행은 됨
	std::cout << n1 << std::endl;

	// 안정성 측면에서 굿
	// prevent narrow : {} 초기화 는 데이터 손실, 오버 플로우는 모두 에러
	//int n2{ 3.3 }; // error 

	//char c1{ 400 }; // error : 1 byte 에 500 담을 수 없음



}

/*
3_蹂�??_1.cpp: In function 'int main()':
3_蹂�??_1.cpp:10:17: error: narrowing conversion of '3.2999999999999998e+0' from 'double' to 'int' [-Wnarrowing]
   10 |         int n2{ 3.3 };
	  |                 ^~~

3_蹂�??_1.cpp:12:18: error: narrowing conversion of '400' from 'int' to 'char' [-Wnarrowing]
   12 |         char c1{ 400 };
	  |                  ^~~
K

C:\DAY1>
*/

