// cout - 169page
//#include <iostream>
#include <stdio.h>
// 사용자가 std namspce를 만들어서 추가하면 안되지만 아래 코드는 수업을 위해서
namespace std
{
	class ostream
	{
	public:
		void operator<<(int n) { printf("%d", n); }
		void operator<<(double d) { printf("%lf", d); }
		void operator<<(const char* n) { printf("%s", n); }

	};
	ostream cout;


}
// cout 의 원리
int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // std::cout.operator<<(int)	호출
	std::cout << d; // std::cout.operator<<(double)	호출


}


