// C++ 함수 특징 3. inline   .. 36page


       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

int main()
{
	int n1 = add1(1, 2);  // 인자 2개를 약속된 장소에 넣고 (64bit > 레지스터, 32bit > stack) > 함수로 이동
	int n2 = add2(1, 2);  // add2 의 기계어 코드 자체를 이부분에 치환
	/*
	mov eax, 2
	add eax, 1
	mov n2, eax

	인라인 함수 의미 : 함수 호출 시 실제 호출이 아닌 기계어 코드치환 해달라
	장점 : 빠르다
	단점 : 함수의 크기가 큰데 여러번 치환되면 코드 메모리 증가
	add2 의 경우 호출이랑 inline 둘다 2~3줄이라 inline이 더 빨라서 유리

	인라인 함수가 아니라도 최적화 하면 치환 될 수 도 있음
	godbolt.org 에서 확인 하려면
	x64 msvc 컴파일러 (visual studio의 컴파일러) 로 하고 "-Ob1" 으로 확인 가능
	*/
}
