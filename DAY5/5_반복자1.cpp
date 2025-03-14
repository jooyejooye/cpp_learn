// 5_반복자1
// => C++ 뿐만 아니라 거의 모든 언어에 있는 개념


#include <iostream>
#include <vector>
#include <list>

// 192 page ~
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 배열의 시작 주소를 알면 모든 요소를 열거할수 있습니다
	// => 배열은 연속된 메모리 이므로
	int* p1 = x;


	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	// STL 의 모든 컨테이너는 반복자를 꺼내면 ++ 연산으로 모든 요소 열거 가능 

	auto p2 = s.begin();
	// p2 가 반복자 (iterator) 입니다 => 사용법은 포인터와 동일
	// p2 : 객체

	++p2; // p2.operator++ ( ) >> 함수 호출
	std::cout << *p2 << std::endl;

	p2.operator++();
	std::cout << *p2 << std::endl;

}