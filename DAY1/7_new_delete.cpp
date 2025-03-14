// 메모리할당 - 47 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int;  // int 한개, 4바이트 할당
	delete p1;  // 메모리 제거

	int* p2 = new int[10]; // int 10개
	delete[] p2; // 배열 할당 경우 배열로 delete
	
	int* p3 = new int[10]; // int 10개
	delete p3; // 이건 undefined behavior 발생 >> 컴파일은 됨, 실행하다가 죽음 >>

	/*
	RUST 철학
	C++ undefined behavior 나쁨 > 차라리 컴파일 에러 나오게 하자
 
						malloc								new
	정체				함수									키워드
	헤더				<stdlib.h>필요		 
	인자				정수(크기)							데이터 타입
	반환타입			void*									인자로 전달되는 타입의 포인터
						사용자가 원하는 타입				캐스팅 필요 없음>> 엄청 좋은것
						포인터로 캐스팅 해서 사용
	결정적 차이		생성자 호출 안됨					생성자 호출됨

	*/

}

