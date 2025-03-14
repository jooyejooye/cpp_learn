// 4_함수4
// C++ 함수의 특징 4. 함수 템플릿 - 39 page
#include <iostream>
/*
****** 중요
* 
타입만 다르고 구현이 유사한 함수가 여러개 필요 하면
1. 함수를 만들지 말고
2. 함수를 찍어내는 틀(template) 을 만들면 됨 
3. call 시 함수 만들어짐 : assembly 언어 보면 나옴
4. type 다르면 다 하나씩 type 별로 만듬 > 메모리 과다 사용

1. godbolt.org 를 사용해 완벽히 이해해 놓을 것
2. code bloat(코드 폭팔) gustkd
템플릿 사용시 컴파일러가 너무나 많은 함수(클래스, 구조체) 등 생성 > 코드 메모리 증가
임베디드 메모리 부족한 경우 주의
*/
template<typename T>
T square(T a)
{
	return a * a;
}



int main()
{
	std::cout << "4-4 templete \n";
	square<int>(3); // 컴파일 할떄 int square(int ) 함수 생성
	// 이 위치는 call square(int) 기계어 생성

	square<double>(3.4);// 컴파일 할떄 double square(double ) 함수 생성
	// 이 위치는 call square(double) 기계어 생성

	square(2); // 알아서 int 들어감

}