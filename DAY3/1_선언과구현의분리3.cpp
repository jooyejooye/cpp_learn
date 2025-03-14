#include <iostream>

// 2. 클래스 선언에는 멤버 함수는 선언만 넣고, 멤버 함수의 구현은 클래스 외부에서 작성 하는 방법

// Vector.h 에 선언부 넣기
// Vector.cpp > 구현부 넣기
// 빌드 하려면 현재 소스와 vector.cpp 가 빌드에 포함되어야함

/*
header : 클래스 선언
.cpp : 멤버 함수 구현

사용하는 쪽에서는 header 가져오기

*/

#include "Vector.h"

int main()
{
	Vector v1(5);
	v1.at(0) = 11;
	std::cout << v1.at(0) << std::endl;
}


// 헤더 include
/*
#include <헤더파일>  // 컴파일러가 약속된 폴더에서 파일을 찾게됨
							 // 표준 헤더 파일 include 할 때 사용

#include "헤더파일"  // 현 디랙토리에서 파일을 찾게 됩니다
							 // 사용자가 만든 헤더 파일을 include 할 때 사용

*/
