// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// 185 ~

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3);

	std::cout << v.size()<<"  " << v.capacity() << std::endl;
	
	v.push_back(4);
	
	std::cout << v.size() << "  " << v.capacity() << "  주소:" << &v[0] << std::endl;

	v.shrink_to_fit();			// 여분의 메모리 제거해 달라
								// 실제 구현은 4개 메모리 할당해서 사용, 기존 5개 메모리 는 제거
	std::cout << v.size() << "  " << v.capacity() <<"  주소:"<<&v[0] << std::endl;

	v.push_back(5);
	std::cout << v.size() << "  " << v.capacity() << "  주소:" << &v[0] << std::endl;
	// size : 5
	// capacity : g++ 은 2배, vs 는 1.5
	
	v.clear(); // 실제 메모리 제거? size 만 0> ==> size 만 0
	std::cout << v.size() << "  " << v.capacity()  << std::endl;

	// 이 순간 필요 없는 메모리 지우기
	v.shrink_to_fit();
	std::cout << v.size() << "  " << v.capacity() << std::endl;

}



/*
stack 이 더 좋은 것 같은데 굳이 heap 쓰는 이유?
stack 차래대로만 사용 할 수 있다 > 중간에 크기 변경 불가

cpu 레지스터 중 ESP
*/
void foo()
{
	int a;
	int b; // -> b 부터 파괴 -> 그 담 a
}
