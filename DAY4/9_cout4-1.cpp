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
		ostream& operator<<(ostream& (*f)(ostream&))  // *f : endl �� �ּ�
		{
			f(*this); // std::endl( std::cout )
			return *this;
		}
	};
	ostream cout; // namespace std �ȿ� �ִ� �������� ostream ������ ��������
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
	std::cout << "hi " << std::endl;		// cout.operator<<(std::endl) �� �ᱹ
												// std::endl ( std::cout ) �Դϴ�
												// �� �Լ� �ּ� ������ �ٽ� ȣ��ǰ� �� ��
	std::cout << "hi " << tab << "hi ";
}
