// cout - 169page
//#include <iostream>
#include <stdio.h>
// ����ڰ� std namspce�� ���� �߰��ϸ� �ȵ����� �Ʒ� �ڵ�� ������ ���ؼ�
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
// cout �� ����
int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n <<" , " << d; //  ( std::cout.operator<<(int) ). operator<<(", "). operator<<(d)ȣ��
	std::cout << d; // std::cout.operator<<(double)	ȣ��


}


