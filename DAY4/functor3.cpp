#include <iostream>
// �Լ� ��ü�� "���� �� �ƴ϶� ���µ� �ֽ��ϴ�."
// => ��� ����Ÿ�� �ִٴ� �ǹ�

// => ���̽㵵 () ������ ������ �˴ϴ�. �Լ� ��ü ����ֽ��ϴ�.

class URandom  // unique random �̶�� �ǹ̷�!!
{
	int history[10];	// ���� �Ϸ��� 10 ��Ʈ��(��Ʈ �ʵ���� ���)
public:

	URandom() {} // �����ڵ� Ȱ�� ����

	int operator()()
	{
		// ���� ������, history �� �־��ٸ� �ٽ� ���ϰ�
		// ������, history �� ����� ����
		return rand() % 10;
	}
};

URandom urand;  // urand �� ��ü���� () �����ڸ� �����������Ƿ�
// �Լ�ó�� ��밡���մϴ�

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}