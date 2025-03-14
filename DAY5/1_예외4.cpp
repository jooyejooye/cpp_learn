#include <iostream>
#include<string>
// 예외 전용 클래스

class file_not_found
{
public:
	std::string file_name;
	file_not_found(const std::string& s):file_name(s) {}
};
// 아무 멤버가 없는 클래스도 나쁘지 않습니다. => 클래스 이름 자체가 설명
class network_error{};
int db_backup()
{
	if (1)				// 함수가 실패하면
	{
		file_not_found e("a.txt");
		throw e;		// 예외 던지기
	}
	if(2)
	{
		network_error e;
		throw e;
	}
	
		
	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	try
	{
		int ret = db_backup();
	}
	catch (const file_not_found& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (const network_error& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (...) // 모든 것을 다 잡겠다
	{
		std::cout << "위에서 잡히지 않은 모든 예외 여기서 발생\n";
	}

	db_remove();
}
