#include <iostream>

// ����. 176 page ~

// ��ȯ������ ������ �����ϴ� ����� ����
// 1. ��ȯ���� ������ ��Ȯ�� �и����� �ʴ´�.
//    (-1 �� ������ ����ΰ� ? ���з� ��ӵ� ���ΰ� ?)

// 2. ȣ���ڿ��� �ݵ�� ������ ó���϶�� ������ �����Ҽ� ����.

int db_backup()
{
	if (����)
		return -1;

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	int ret = db_backup();

	if (ret == -1) {}

	db_remove();
}
