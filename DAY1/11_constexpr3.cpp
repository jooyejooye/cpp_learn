#include <iostream>
/*
const expr �Լ� ���ǻ���
������ �ð��� �� �� ���� �۾��� �ִ� �Լ��� constexpr �� �� ����
> ȭ�� ���, �����۾�, �޸� �Ҵ�, ��Ʈ��ũ ����

*/
constexpr int Add(int a, int b)
{
	std::cout << "add\n";
	return a + b;

}

int main()
{

}

/*
github.com/webkit ���� �� > �������� ����
https://github.com/WebKit/WebKit/blob/main/Source/WTF/wtf/Seconds.h
���¼ҽ��� �� constexpr

*/