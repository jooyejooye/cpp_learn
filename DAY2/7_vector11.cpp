#include <iostream>
// C���
//		Vector��� Ÿ�� ����
//		���� �迭 �ʿ��ϸ� vector3.cpp ó�� �Ź� ��������
// 
// C++, java, C# : ��� Vector ����
// python : list ����
//

#include<vector>

int main()
{
	std::vector<int> v; // ũ�Ⱑ 0 �� vector
	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1)
			break;
		v.push_back(n);
	}
	std::cout << "count: " << v.size() << std::endl;
	std::cout << "size: " << v.capacity();
}
/*
�� �ڵ尡 vector3.cpp �� ������ ��� ����
std::vector Ÿ���� �����Ƿ� vector3.cpp ���� �ξ� ����
*/