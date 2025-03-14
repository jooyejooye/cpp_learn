// 28 page ~

int main()
{
	int x[3] = { 1,2,3 };

	/*
	1. auto : 우변의 표현식으로 좌변의 타입을 결정해 달라는 것
	- c++11 에서 추가
	- 컴파일러가 결정하므로 실행시간 오버헤드 없음
	*/

	int n = x[0];
	auto au = x[0];

	/*
	2. decltype : () 안의 표현식의 타입을 결정해 달라.
	- c++11 에서 추가
	- auto : 일반 개발자도 널리 사용하는 반드시 알아야 하는 문법
	- decltype : 라이브러리 설계자 위한 것
	*/
	decltype(n) d; // int n

	const int c = 10;
	auto aa = c; 
	/*
	3. auto 는 생각보다 어렵다

	1. int aa = c >> yes : 개발자 쓰기 쉽게
	2. const int a = c >> no

	auto 가 타입을 추론하는 알고리즘은 복잡해서
	많은 c++ 문법 알아야 하고
	지금은 우변의 const volatile reference 제거 하고 결정 된다 까지 알아두기
	*/
	


}
