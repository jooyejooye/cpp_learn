#include <iostream>

// 함수는 동작이 있지만 상태가 없습니다
//		=>	그래서 수행 중에 만들어진 데이터를 보관 할 방법이 없습니다
//		=> 그래서 전역변수 등을 사용하게 됩니다
// 

// 0~9 사이 난수를 반환하는 함수
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << urand() << std::endl;
	}
}