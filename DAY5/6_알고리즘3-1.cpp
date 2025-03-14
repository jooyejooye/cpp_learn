// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
// stl::find	: 값 검색, 3번째 인자로 값
// stl:find_if	: 조건 검색, 3번재 인자로 함수

// 단항 함수	: 인자가 1개인 함수
// 이항 함수	: 인자가 2개인 함수

// 조건자(predicate) : Bool을 반환하는 함수
// find_If 의 3번째 인자는 "단항 조건자 (unary predicate) " 입니다
// find_if 는 단항만 가능


bool foo(int n) { 	return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	auto ret1 = std::find_if(v.begin(), v.end(), foo);
	auto ret2 = std::find_if(v.begin(), v.end(), [](int n) { return n % 3 == 0; }); // lambda 표현식, C++11 이후 가능
	// ret1 ret2 둘다 동일 역할

	// 람다 표현식(lambda expression)
	// => C++11
	// => 익명의 함수를 만드는 문법
	// => 함수 이름을 전달하는 위치에 "함수 구현 자체"를 전달하는 기술

	// [] : 람다표현식이 시작됨을 알리는 기호
	//		lambda introducer
	// []  (int n) { return n % 3 == 0; }
	// return type & 함수 이름 제외 하고 복붙
	// 
	// []  (int n) -> bool { return n % 3 == 0; }
	//			반환 타입 생략가능 (컴파일러가 알아서 추측해줌), 표기하려면 이렇게!
	// 


}