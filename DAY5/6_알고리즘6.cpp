#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = { 6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0 };	 // 7 , 9 , 11 , 13 , 15 ,

	// v2 가 더 짧으면 run time error : 개발자 책임

	std::transform(
		v1.begin(), v1.end(),					// 1. 이 구간의 요소를
		v2.begin(),								// 2. 이 구간의 요소와 함께  // 끝은 예측가능해서 2번재는 첫 부분만 넣기
		v3.begin(),								// 4. 이곳에 넣어라
		[](int a, int b) {return a + b; } ) ;	// 3. 이 함수에 보내서 반환값을
	

	for (auto e : v3)
		std::cout << e << " , ";
}