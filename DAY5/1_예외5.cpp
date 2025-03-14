class network_error {};
#include<iostream>
/*
python c# java : ���ܸ� ���� ���� ����մϴ�

c++ ����
������ ������ ���� ó��: �Լ� ��ȯ ������ ó��
�ɰ��� ���� (ó��	���� ������ ���� �Ǵ°� ���� ���) : ���� ���
-> ���� �Ӻ���� ���߿��� ���� ��� ���� ����

*/
void f3()
{
	network_error e;
	throw e;  // throw �߻��ϸ� catch �� �ִ� ������ �ٷ� �ǳ� ��
				// ��κ��� �����Ϸ��� e ��ü�� ���纻�� heap �� ����
				// �ణ�� ������� ���� (heap) ������, 
				//		������ ���� : return
				//		�߿��� ����: throw
}
void f2()
{
	f3();
}
void f1()
{
	f2();
}
int main()
{
	try
	{
		f1();
	}
	catch (const network_error& e)
	{
		// catch ������ ���� �ִ� ������ ��ü e�� delete �ϴ� �ڵ尡 �߰��˴ϴ�.
	}
}