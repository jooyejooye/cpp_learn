// cout - 169page
//#include <iostream>
#include <stdio.h>
// ����ڰ� std namspce�� ���� �߰��ϸ� �ȵ����� �Ʒ� �ڵ�� ������ ���ؼ�
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
// cout �� ����
int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // std::cout.operator<<(int)	ȣ��
	std::cout << d; // std::cout.operator<<(double)	ȣ��


}


