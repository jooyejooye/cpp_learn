#include <iostream>
/*
C++은 용도에 따라 4개의 캐스팅 존재

일반적인 용도 : static_cast
특수 목적 : reinterpret_cast, const_cast, dynamic_cast
*/
// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//			표준 타입 끼리 값 캐스팅
//          void*=> 다른 타입*,
//			상속관계의 캐스팅 등.
//          반드시 연관성이 있어야 한다


int main()
{
	double d = 3.4;
	//int    n = d;
	int n = static_cast<int>(d); // ok, 경고도 없음 : 표준 타입 끼리 값 캐스팅
	// square<int>(d)와 유사, 사용법이 동일한거지 함수가 동일한거 아님




	// void* > int* 로 변경 : 반드시 필요한 직업이다 > static_cast 허용
//	int* p1 = malloc(100);     // C언어 : ok. C++ : 에러
	int* p2 = (int*)malloc(100);     // C 스타일 캐스팅
	int* p3 = static_cast<int*>(malloc(100));     // C++ 스타일 캐스팅



	// int* > double* 로 변경 : 매우 위험 : 일반적인 프로그램잉에서 필요 없음 
	// 그래서 static_cast 허용 안함
	// 만약 필요하면 전용 캐스팅 써라
	double* p4 = (double*)&n;     // C 스타일 캐스팅
	//double* p5 = static_cast<double*>(&n);     //error
	double* p6 = reinterpret_cast<double*>(&n);     //ok : reinterpret_cast 이런거 전용 캐스팅
	// *p6 = 3.4; // 이렇게 쓰면 실행시 값 corrupt , 컴파일되지만 실행시 에러날듯
	// 개발자 요청이므로 캐스팅은 허용하지만 주의해서 사용해야 함




}

