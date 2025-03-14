// cout - 169page
//#include <iostream>
#include <stdio.h>
// ����ڰ� std namspce�� ���� �߰��ϸ� �ȵ����� �Ʒ� �ڵ�� ������ ���ؼ�

// std::endl ����
//		=> ����� ����, ���� ����

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d ", n); return *this; }
		ostream& operator<<(double d) { printf("%f ", d); return *this; }
		ostream& operator<<(const char* n) { printf("%s ", n); return *this; }
		ostream& operator<<( ostream&(*f)(ostream&) )  // *f : endl �� �ּ�
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
// cout �� ����
int main()
{

//	std::cout << std::endl; // ����, ' const char* endl = "\n" ' �� ���� �ƴ�

	std::endl(std::cout);// ok , endl �� �Լ��Դϴ� > ���ڵ尡 ���� ����

	std::cout <<"hi " << std::endl; // cout.operator<<( ? )
}


