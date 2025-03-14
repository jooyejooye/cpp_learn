#include <cstdio> // printf 용
#include <iostream> // cout cin 사용시

// 13page

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
	scanf("%d", &n);	   // 입력

	// C++ style
	/*
	출력 : std::cout 사숑
	특징 
	1. %d %f 등의 포맷 지시어 사용 안함
	2. << 여러번 사용 가능
	3. 개행은 std::endl 또는 \n (\n이 더 빠름)

	printf : 함수
	std::cout : 객체
	*/
	std::cout << "n= " << n << std::endl;

	// 표준 입력
	/*
	1. >> 방향에 주의
	2. &n 이 아니라 n
	*/
	std::cin >> n;
}
