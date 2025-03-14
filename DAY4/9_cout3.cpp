// cout - 169page
//#include <iostream>
#include <stdio.h>
// 사용자가 std namspce를 만들어서 추가하면 안되지만 아래 코드는 수업을 위해서
namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d ", n); return *this; }
		ostream& operator<<(double d) { printf("%f ", d); return *this;}
		ostream& operator<<(const char* n) { printf("%s ", n); return *this;}
	};
	ostream cout;


}
// cout 의 원리
int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n <<" , " << d; //  ( std::cout.operator<<(int) ). operator<<(", "). operator<<(d)호출
	std::cout << d; // std::cout.operator<<(double)	호출


}


