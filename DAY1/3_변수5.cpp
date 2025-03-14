// 3_변수5
// 30 page ~

// 1. c언어 typedef
typedef int DWORD;
typedef void(*PF)();

// 2. c++11 부터 using 이 더 편함
using DWORD = int;
using PF = void(*)();

/*
3. using 만든 이유

typedef : 타입의 별명만 만들 수 있다
using : 타입의 별명 + 템플릿의 별면도 만들 수 있다.

4. 하나의 키워드가 여러가지로 사용되는 경우 존재
using declaration, directive : namespace 에서 사용
using alias : 타입의 별명을 만들 때 사용

*/

int main()
{
	DWORD n; // int n
	PF    f;  // void(*f)
}

