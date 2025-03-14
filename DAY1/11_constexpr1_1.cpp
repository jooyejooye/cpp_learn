
int main()
{
	int sz1 = 10;
	const int sz2 = sz1;
	const int sz3 = 10;
	constexpr int sz4 = 10;

	int x1[10];  // ok
	int x2[sz1]; // C89 - ERROR , C98-OK, C11-표준에서 컴파일러 따라 다를 수 있다 정의
	/*
	C++ : 	표준에서 배열의 크기는 컴파일 시간에 알아야 한다고 정의
	g++ clang은 확장 문법으로 허용
	visual studio 에서는 error
	*/
	int x3[sz2]; // 컴파일 시 값 모름 > ERROR
	int x4[sz3]; // OK : 컴파일러가 값을 알 수 있다
	int x5[sz4]; // OK 
}