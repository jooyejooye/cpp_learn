// 4_STL_�����̳�1.cpp
#include <iostream>
#include <vector>

// 184 page ~ 

int main()
{
	// �迭   : ũ�⸦ �����Ҽ� ����. ���ӵ� �޸�
	//			: Stack �� ����

	
	// vector : ũ�⸦ �����Ҽ� �ִ�. ���ӵ� �޸�, �迭�� ���� ���� ����
	//			: ���� �޸� �Ҵ� : heap
	//			: stack( *)  --> heap { 1,2,3,4,5}
	
	// �迭 vs vector
	//			: ���� �� �伭 ���� �ӵ��� ����
	//			: ���� / �ı��ϴ� ���� heap���� stack �� ��û ����, stack : ������� �������� 
	int x[5] = { 1,2,3,4,5 };

	std::vector<int> v = { 1,2,3,4,5 };

	// �迭�� vector �� ������ ���� ���� �մϴ�.
	std::cout << x[0] << std::endl; // [] ������ ��밡��
	std::cout << v[0] << std::endl; // [] ������ ��밡��

	// ������ vector �� �迭 ���� ���մϴ�.
	v.resize(10);

	std::cout << v.size() << std::endl; // 10
}

