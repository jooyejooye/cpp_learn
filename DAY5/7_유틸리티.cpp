// 7_유틸리티
#include <iostream>
#include <tuple>
#include <vector>

// 다른 언어가 제공하는 도구는 대부분 C++에도 있습니다.
// => 요즘 언어들은 아주 많이 비슷하다는 특징이 있습니다.

// s = [1,2,3]    파이썬 리스트 : 동일 타입의 객체를 여러개 보관
// t = (1, 3.4)   파이썬 튜플 : 다른 타입의 객체를 여러개 보관

int main()
{
	std::vector<int> v = { 1,2,3,4,5 }; // 파이썬 리스트

	std::tuple<int, double, char> t(1, 3.4, 'A'); // 튜플 : c++ 11
//	std::tuple<int, double, char[2]> t2(1, 3.4, "A"); // error
	std::tuple<int, double, const char*> t3(1, 3.4, "A"); // ok, 배열은 포인터로 치환 가능
	std::tuple<int, double, std::string> t4(1, 3.4, "A"); // ok

	char a1[2] = "a";
//	char a2[2] = a1; // error , 배열은 복사 불가능

//	STL 컨테이너는 복사 될 수 있는 타입만 보관 가능합니다 >> char[2] 는 배열임으로 복사 불가능


//	std::tuple t(1, 3.4, 'A'); // 튜플 : c++ 17 부터 타입 생략 가능

	// 접근이 어렵습니다.
	std::cout << std::get<1>(t); // 3.4
	std::cout << std::get<2>(t); // 'A'
	std::cout << std::get<2>(t); // 'A
}

/*
'A'		: 메모리에 65 만 있음 아스키 코드		char 타입
"A"	: 메모리에 65, 0  입니다. {65, 0 } == {'A','/0'}		char[2] 타입

*/