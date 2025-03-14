// 4_STL_�����̳�1.cpp
#include <iostream>
#include <vector>

// 185 ~

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3);

	std::cout << v.size()<<"  " << v.capacity() << std::endl;
	
	v.push_back(4);
	
	std::cout << v.size() << "  " << v.capacity() << "  �ּ�:" << &v[0] << std::endl;

	v.shrink_to_fit();			// ������ �޸� ������ �޶�
								// ���� ������ 4�� �޸� �Ҵ��ؼ� ���, ���� 5�� �޸� �� ����
	std::cout << v.size() << "  " << v.capacity() <<"  �ּ�:"<<&v[0] << std::endl;

	v.push_back(5);
	std::cout << v.size() << "  " << v.capacity() << "  �ּ�:" << &v[0] << std::endl;
	// size : 5
	// capacity : g++ �� 2��, vs �� 1.5
	
	v.clear(); // ���� �޸� ����? size �� 0> ==> size �� 0
	std::cout << v.size() << "  " << v.capacity()  << std::endl;

	// �� ���� �ʿ� ���� �޸� �����
	v.shrink_to_fit();
	std::cout << v.size() << "  " << v.capacity() << std::endl;

}



/*
stack �� �� ���� �� ������ ���� heap ���� ����?
stack ������θ� ��� �� �� �ִ� > �߰��� ũ�� ���� �Ұ�

cpu �������� �� ESP
*/
void foo()
{
	int a;
	int b; // -> b ���� �ı� -> �� �� a
}
