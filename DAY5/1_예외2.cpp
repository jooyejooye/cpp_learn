#include <iostream>

// ����. 176 page ~
// 
// ��ü ���� ���α׷��ֿ��� ���� ó�� => ���� (exception) �̶�� ��� ���

// 1. �Լ����� ������ �߻��ϸ� ���ܸ� �����ϴ� "throw"
//		=> ������ ���ܸ� ���� ������ ���α׷��� ������ ���� �˴ϴ�

int db_backup()
{
	if (1)				// �Լ��� �����ϸ�
		throw -1;			// ���� ������

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	int ret = db_backup();

	db_remove();
}
