#include <iostream>

// 던져진 예외 잡기 (try catch)


int db_backup()
{
	if (1)				// 함수가 실패하면
		throw - 1;			// 예외 던지기

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	try
	{
		int ret = db_backup();
	}
	catch(int e)
	{
		std::cout <<"예외 발생\n";

		// 예외의 원인을 해결 할 수 없다면 여기서 사용자에게 알리고 종료해야 합니다.
		// std::exit(-1);
		// 종료 하지 않으면 프로그램을 계속 실행됩니다.

	}
	
	db_remove();
}
