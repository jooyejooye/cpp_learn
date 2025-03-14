// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// 184 page ~ 

int main()
{
	// 배열   : 크기를 변경할수 없다. 연속된 메모리
	//			: Stack 에 저장

	
	// vector : 크기를 변경할수 있다. 연속된 메모리, 배열과 사용법 거의 동일
	//			: 동적 메모리 할당 : heap
	//			: stack( *)  --> heap { 1,2,3,4,5}
	
	// 배열 vs vector
	//			: 생성 후 요서 접근 속도는 유사
	//			: 생성 / 파괴하는 것은 heap보다 stack 이 엄청 빠름, stack : 순서대로 차곡차곡 
	int x[5] = { 1,2,3,4,5 };

	std::vector<int> v = { 1,2,3,4,5 };

	// 배열과 vector 는 사용법이 거의 동일 합니다.
	std::cout << x[0] << std::endl; // [] 연산자 사용가능
	std::cout << v[0] << std::endl; // [] 연산자 사용가능

	// 하지만 vector 가 배열 보다 편리합니다.
	v.resize(10);

	std::cout << v.size() << std::endl; // 10
}

