
void foo(int p) {}
int goo(int a, double d) {}

// 포인터 변수 (다른 변수의 주소를 담는 변수) 를 만드는 방법 
//		1. 기존 변수의 주소를 구하려면 & 연산자를 사용한다
//		2. 포인터 변수를 만들려면 변수 선언문에서 이름 앞에 * 를 붙인다
//		3. 연산자 우선순의 문제가 있을 떄만 () 를 붙인다

int main()
{
int n = 10; 	double d = 0;

int* p = &n;
double* p2 = &d;

//	void *p3(int p) = &foo;  // void foo(int p) >> foo 가 이름 > *foo >> foo 대신 원하는 포인터 이름 p3 > *p3 넣기
								// 연산자 우선순위 : () 먼저>>  p3(int p) 라는 함수 먼저 불림 >> (*p3) 으로 따로 묶어주기
void (*p3)(int p) = &foo;
int (*p4)(int, double) = &goo;

// p3 p4 에는 함수의 주소가 있습니다, 주소를 가지고 호출 시
(*p3)(10);		 // 이표현이 정확
p3(10);		 // 이표현도 허용

// 또한 함수 이름은 함수 주소로 암시적 형변환 되므로
void(*p5)(int) = &foo;		// 이표현이 정확
void(*p6)(int) = foo;			// 이표현도 허용
	

}