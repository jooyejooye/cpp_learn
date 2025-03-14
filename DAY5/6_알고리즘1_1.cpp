// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 200 page ~
int main()
{
	std::list<int>   s = { 1,2,33,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::find
	// 검색 구간: [ first, last )  // " ) " last는 검색 대상 아님 
	// 반환 값	: 찾은 곳을 가리키는 반복자, 실패시 last 반환

	auto ret1 = std::find(s.begin(), s.end(), 33);
	auto ret2 = std::find(v.begin(), v.end(), 3);
	auto ret3 = std::find(v.begin(), v.end(), 2);

	if (ret1 == s.end()) { std::cout << "검색 실패\n"; }
	else { std::cout << *ret1<<'\n'; }

	if (ret3 ==v.end()) { std::cout << "검색 실패\n"; }
	else { std::cout << *ret3 << '\n'; }


}
