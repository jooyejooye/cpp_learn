// cout - 169page
//#include <iostream>
#include <stdio.h>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n); return *this; }
		ostream& operator<<(double d) { printf("%f", d); return *this; }
		ostream& operator<<(const char* n) { printf("%s", n); return *this; }
		ostream& operator<<(ostream& (*f)(ostream&))  // *f : endl 의 주소
		{
			f(*this); // std::endl( std::cout )
			return *this;
		}
	};
	ostream cout; // namespace std 안에 있는 전역변수 ostream 형태의 전역변수
	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	};
}
// ----------------------
std::ostream& tab(std::ostream& os)
{
	os << "\t"; return os;
}



int main()
{
	std::cout << "hi " << std::endl;		// cout.operator<<(std::endl) 는 결국
												// std::endl ( std::cout ) 입니다
												// 즉 함수 주소 보내서 다시 호출되게 한 것
	std::cout << "hi " << tab << "hi ";
}
