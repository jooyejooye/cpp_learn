
/*
constexpr 의 3가지 용도
1. constexpr 상수 - C++11 : 1번 예제
2. constexpr 함수 - C++11 : 현재 예제
3. constexpr if - C++17 : 마지막날

*/

// constexpr 함수 : 함수 앞에 constexpr 을 붙인 함수
// 의미 : 인자값을 컴파일 할때 알수 있고
//        반환값이 사용되는 위치가 컴파일 할때 알아야 한다면
//        함수 실행을 컴파일 할때 해달라는 것

constexpr int add(int a, int b) // 간단하게 하면 저런데서도 사용가능
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	int x1[add(3, 4)]; // 함수 실행을 컴파일 할때 실행
//	int x2[add(a, b)]; // error : 배열의 크기는 컴파일 할 때 알아야 하는데 인자 값을 컴파일 할 때 알 수 없음

	int n1 = add(a, b); // 결과를 실행할 때 알아도 되니까 ㄱㅊ

 	int n2 = add(a, b); // 컴파일 시간 ?  실행시간? >> 컴파일러 마다 다름
	const int n3 = add(a, b); // 컴파일 시간 ?  실행시간?  >> 컴파일러 마다 다름
	constexpr int n4 = add(a, b); // 컴파일 시간 ?  실행시간? >> 컴파일 할때 알아야 함 >> 컨파일 시간
	// 즉 constexpr 의 의도는 우변을 반드시 컴파일 할 떄 계산해 달라는 요청
}