#include <iostream>
/*
const expr 함수 주의사항
컴파일 시간에 할 수 업는 작업이 있는 함수는 constexpr 될 수 없음
> 화면 출력, 파일작업, 메모리 할당, 네트워크 연결

*/
constexpr int Add(int a, int b)
{
	std::cout << "add\n";
	return a + b;

}

int main()
{

}

/*
github.com/webkit 접속 후 > 웹브라우저 엔진
https://github.com/WebKit/WebKit/blob/main/Source/WTF/wtf/Seconds.h
오픈소스는 다 constexpr

*/