#include <iostream>
#include<string>
// ���� ���� Ŭ����

class file_not_found
{
public:
	std::string file_name;
	file_not_found(const std::string& s):file_name(s) {}
};
// �ƹ� ����� ���� Ŭ������ ������ �ʽ��ϴ�. => Ŭ���� �̸� ��ü�� ����
class network_error{};
int db_backup()
{
	if (1)				// �Լ��� �����ϸ�
	{
		file_not_found e("a.txt");
		throw e;		// ���� ������
	}
	if(2)
	{
		network_error e;
		throw e;
	}
	
		
	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	try
	{
		int ret = db_backup();
	}
	catch (const file_not_found& e)
	{
		std::cout << "���� �߻�\n";
	}
	catch (const network_error& e)
	{
		std::cout << "���� �߻�\n";
	}
	catch (...) // ��� ���� �� ��ڴ�
	{
		std::cout << "������ ������ ���� ��� ���� ���⼭ �߻�\n";
	}

	db_remove();
}
