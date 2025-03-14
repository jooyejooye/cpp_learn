#include <iostream>

// 예외. 176 page ~
// 
// 객체 지향 프로그래밍에서 오류 처리 => 예외 (exception) 이라는 기술 사용

// 1. 함수에서 오류가 발생하면 예외를 던집니다 "throw"
//		=> 던져진 예외를 잡지 않으면 프로그램은 비정상 종료 됩니다

int db_backup()
{
	if (1)				// 함수가 실패하면
		throw -1;			// 예외 던지기

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	int ret = db_backup();

	db_remove();
}
