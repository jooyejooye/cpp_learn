#include <iostream>

// 26page - �߿��� ��ȭ.!

int main()
{
	// ������ ���鿡�� �� : ������ ����
	int n1 = 3.4; // �ϴ� ������ ��
	std::cout << n1 << std::endl;

	// ������ ���鿡�� ��
	// prevent narrow : {} �ʱ�ȭ �� ������ �ս�, ���� �÷ο�� ��� ����
	//int n2{ 3.3 }; // error 

	//char c1{ 400 }; // error : 1 byte �� 500 ���� �� ����



}

/*
3_변??_1.cpp: In function 'int main()':
3_변??_1.cpp:10:17: error: narrowing conversion of '3.2999999999999998e+0' from 'double' to 'int' [-Wnarrowing]
   10 |         int n2{ 3.3 };
	  |                 ^~~

3_변??_1.cpp:12:18: error: narrowing conversion of '400' from 'int' to 'char' [-Wnarrowing]
   12 |         char c1{ 400 };
	  |                  ^~~
K

C:\DAY1>
*/

