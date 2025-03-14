#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 }; // 연속된 메모리, 삽입삭제 느리다. 
										// 요소 열거가 빠르고, 캐쉬 적중률이 높다.

	std::list<int>   s = { 1,2,3,4,5 }; // 모든 요소가 떨어진 메모리, 삽입삭제 빠르다. >> linked list
										// 요소 열거가 느리고, 캐쉬 적중률이 낮다.
	
	std::deque<int>  d = { 1,2,3,4,5 }; // 연속된 메모리와 유사, 
										// 대부분의 작업에서 list 와 vector의 중간 성능
										// "덱" 또는 "디큐" 라고 발음합니다.
										//  양쪽 끝에서 삽입 삭제 가능
	
	// 핵심 1. 대부분의 멤버 함수는 이름이 동일합니다.
	//			=> 기능 동일, 성능 다름
	s.push_back(10);
	d.push_back(11);
	v.push_back(12);

	// 핵심 2. vector만 앞에 삽입할수 없습니다.
	s.push_front(10);
	d.push_front(10);
//	v.push_front(10);	// error,  앞에 넣으면 2~마지막 까지 다 복제 해야함, 너무 느림
							// vector 가 아닌 list나 deque를 사용하려는 의도

	// 핵심 3. [] 연산자는 vector와 deque만 가능합니다.(연속된 메모리와 유사한것만)
	v[0] = 0;
	d[0] = 0;
//	s[0] = 0;  // error : list는 안됨 


	// 선택 기준
	// 1. [] 를 사용하고 싶은데, 전방삽입을 할일은 없다. : vector
	// 2. [] 를 사용하고 싶은데, 전방삽입도 필요하다.    : deque
	// 3. [] 필요 없고, 삽입/삭제 작업을 많이 한다.      : list

	// 권장 : 대부분의 경우 캐쉬가 있는 환경이라면 vector 권장 
	//
	// 어떤 데이터가 연속	: 전체가 캐시에 올라갈 확률이 높음 
	// 어떤 데이터가 비연속	: 전체가 캐시에 올라갈 확률 적음 
	// => 어떨 때는 삽입 삭제도 vector가 더 빠를 수도
	// 

	std::vector<int> c = { 1,2,3 };

	// 대부분의 멤버 함수이름이 유사하므로 컨테이너를 변경해가면서 성능 테스트 할수 있습니다.
	c.push_back(10);
	int n = c.back();
}


// 컨테이너(Container ) : 여러개의 요소를 보관하는 클래스
//						list, vector, deque 등
//						다른 언어에서는 collection 이라고도 합니다. >> python C# Java 

