// 3_변수6.cpp   31 page 

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	int x = pt.x;
	int y = pt.y;

	// auto a1 = pt.x
	// auto a2 = pt.y
	// auto [a1, a2] = pt;  // c++17 에서 가능 > 프로젝트 > 속성 > c++ 언어 표준

	// 반드시 auto 만 가능
	// int [b1, b2] = pt; //error

	// 갯수 동일
	// auto [c1, c2, c3] = pt; // error

	// 특정 멤머는 관심이 없을 때
	// c# : _ 사용
	// c++ : 2번 이상 안됨, C++26 부터 _ 이름인 변수는 여러번 선언 가능
	auto [d1, _ ] = pt;

	// auto [e1, _] = pt; // 변수 _ 여러번 정의됨

	// 5. 구조체 뿐만 아니라 배열도 가능

	int arr[3] = { 1,2,3 };
	// auto [e1, e2, e3] = arr;


}
