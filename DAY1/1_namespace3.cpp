// 1_namespace3.cpp - 9page 내용
/*

*/
#include <iostream> // cout cin 사용시
#include <algorithm>
/*

C:\DAY1>g++ 01_namespace3.cpp
01_namespace3.cpp: In function 'int main()':
01_namespace3.cpp:7:17: error: 'min' was not declared in this scope; did you mean 'std::min'?
    7 |         int n = min(3, 2); // C++ ?쒖? ?⑥닔. algorithm ?ㅻ뜑 ?꾩슂
      |                 ^~~
      |                 std::min
m
In file included from C:/mingw64/include/c++/15.0.0/algorithm:61,
                 from 01_namespace3.cpp:3:
C:/mingw64/include/c++/15.0.0/bits/stl_algo.h:5695:5: note: 'std::min' declared here
 5695 |     min(initializer_list<_Tp> __l, _Compare __comp)
      |     ^~~


*/
using namespace std;

int count = 10;

int main()
{
    // int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
    int n = std::min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
    ::count = 20; // std 내부 count 인지, global count 인지 햇갈릴 여지 있음
}