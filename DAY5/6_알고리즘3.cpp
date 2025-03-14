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
bool foo(int n)
{
	return n % 3 == 0;
}

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라
	auto ret1 = std::find(v.begin(), v.end(), 3); 
	auto ret2 = std::find_if(v.begin(), v.end(), foo);  // foo( 한개- 단항함수) -> bool return : predicator

	if (ret2 == v.end())
	{
		
	}
	else
	{
		std::cout << *ret2 << std::endl;
	}
}