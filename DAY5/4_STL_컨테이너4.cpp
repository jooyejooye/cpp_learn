// 5_STL_컨테이너4
#include <iostream>
#include <vector>
#include <list>
#include <deque>

// 모든 컨테이너들의 공통된 특징

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// 1. 제거와 반환을 동시에 하는 멤버 함수는 없습니다.
	// => 가장 안전한 컨테이너를 설계 하려면 이렇게 해야한다는 이론 존재
	// => exception safety 의 강력보장 이라는 이론

	int n = v.back(); // 끝에서 하나 얻기.. 제거는 안됨.
	v.pop_back();     // 제거만, 반환값은 void

	std::cout << n << std::endl;

	// 2. 컨테이너가 컨테이너를 보관하면 아주 좋은 "자료구조"를 만들수 있습니다.
	// "자료구조(data structure)" : 데이타를 어떻게 보관할 것인가 ? 를 다루는 분야

	std::vector<int> v1(10);
	v1[0] = 10; // v1 은 int 값 보관

	std::vector< std::list<int> > v2(10);

	v2[0].push_back(1);
	v2[0].push_back(2);
	v2[0].push_back(3);

	v2[1].push_back(10);
	v2[1].push_back(20);

	std::vector< std::vector<int> > v3(4); // vector 가 vector 보관
	v3[0].resize(10);
	v3[0].push_back(1);
	v3[0].push_back(2);
	v3[0].push_back(3);

	std::cout << v3[0].size() << " " << v3[0][12];


}
