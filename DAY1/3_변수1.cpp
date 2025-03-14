// 3_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 교재 22 page ~


struct Point 
{
	int x, y; 
};

int main()
{
	bool b1 = true;
	long long n = 0; // C++ 11 부터 적용

	// 이진수 표기법 자릿수 표기법
	int n1 = 0b11; // c++14 부터 가능
	int n2 = 1'000'000; // 컴파일러에게 정슈 리터럴 사의 '는 무시해 달라는 것 > 주석입니다
	
	
	// 구조체 변수 만들때 STRUCT 키워드 없어도 됨
	struct Point p1; // C 언어 스타일
	Point p2;  // C++ STUCT 필요 없음

	std::cout << "3-1";
}
