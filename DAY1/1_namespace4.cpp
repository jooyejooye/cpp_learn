// 10 page 
#include <iostream> // cout cin 사용시
//#include <stdio.h> // c 언어용 헤더 printf 가 global 에만 있음
#include <cstdio> // c++ 이 다시만든 c 언어용 헤더
                  // 모든 c 표준 함수가 global 과  std:: 안에 있음
/*
1. c++에서 대부분의 c 헤더 계속 사용 가능함 

2. c++ 은 모든 c 언어 헤더를 다시 만들었다
<studio.h> cstudio
<stdlib.h> cstdlib
<string.h> cstring
<math.h> math
*/

int main()
{
	// printf 는 c 표준이지만 c++ 표준이기도 함
	printf("hello\n"); // ok
	std::printf("hello\n"); // ??
}

/*
* 
#include <stdio.h> : 이것만 있을 떄

01_namespace4.cpp: In function 'int main()':
01_namespace4.cpp:9:14: error: 'printf' is not a member of 'std'; did you mean 'printf'?
	9 |         std::printf("hello\n"); // ??
	  |              ^~~~~~
In file included from 01_namespace4.cpp:3:
C:/mingw64/x86_64-w64-mingw32/include/stdio.h:513:15: note: 'printf' declared here
  513 |   int __cdecl printf(const char * __restrict__ _Format,...);
	  |               ^~~~~~

>
*/