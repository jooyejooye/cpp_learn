// cout - 169page
//#include <iostream>
#include <stdio.h>
// 사용자가 std namspce를 만들어서 추가하면 안되지만 아래 코드는 수업을 위해서

// std::endl 원리
//		=> 어려운 내용, 몰라도 ㄱㅊ

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d ", n); return *this; }
		ostream& operator<<(double d) { printf("%f ", d); return *this; }
		ostream& operator<<(const char* n) { printf("%s ", n); return *this; }
		ostream& operator<<( ostream&(*f)(ostream&) )  // *f : endl 의 주소
		{ 
			f(*this); // std::endl( std::cout )
			return *this; 
		}
	};
	ostream cout;

	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	};


}
// cout 의 원리
int main()
{

//	std::cout << std::endl; // 개행, ' const char* endl = "\n" ' 는 절대 아님

	std::endl(std::cout);// ok , endl 은 함수입니다 > 이코드가 위와 동일

	std::cout <<"hi " << std::endl; // cout.operator<<( ? )
}


