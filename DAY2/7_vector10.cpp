#include <iostream>
#include <vector>
// C++ ǥ�� vector ����
// ������ �츮�� ���� �Ͱ� ����
// 
// STL : Standard template library
//		  C++ ǥ�� ���̺귯���� ��κ� template �̶� �̷��� �θ�
// 
// 

int main()
{
	std::vector<int> v1(4, 0);
	v1[0] = 9;
	v1.at(1) = 8;
	v1.resize(8);
	v1.push_back(0); // �̼��� size �� 9�� , ������ �޸� ��ü  ũ��� g++ 2��, vc 1.5��

	std::cout << v1.size() << std::endl;

	std::cout << v1.capacity() << std::endl;
}