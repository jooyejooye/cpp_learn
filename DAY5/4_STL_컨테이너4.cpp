// 5_STL_�����̳�4
#include <iostream>
#include <vector>
#include <list>
#include <deque>

// ��� �����̳ʵ��� ����� Ư¡

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// 1. ���ſ� ��ȯ�� ���ÿ� �ϴ� ��� �Լ��� �����ϴ�.
	// => ���� ������ �����̳ʸ� ���� �Ϸ��� �̷��� �ؾ��Ѵٴ� �̷� ����
	// => exception safety �� ���º��� �̶�� �̷�

	int n = v.back(); // ������ �ϳ� ���.. ���Ŵ� �ȵ�.
	v.pop_back();     // ���Ÿ�, ��ȯ���� void

	std::cout << n << std::endl;

	// 2. �����̳ʰ� �����̳ʸ� �����ϸ� ���� ���� "�ڷᱸ��"�� ����� �ֽ��ϴ�.
	// "�ڷᱸ��(data structure)" : ����Ÿ�� ��� ������ ���ΰ� ? �� �ٷ�� �о�

	std::vector<int> v1(10);
	v1[0] = 10; // v1 �� int �� ����

	std::vector< std::list<int> > v2(10);

	v2[0].push_back(1);
	v2[0].push_back(2);
	v2[0].push_back(3);

	v2[1].push_back(10);
	v2[1].push_back(20);

	std::vector< std::vector<int> > v3(4); // vector �� vector ����
	v3[0].resize(10);
	v3[0].push_back(1);
	v3[0].push_back(2);
	v3[0].push_back(3);

	std::cout << v3[0].size() << " " << v3[0][12];


}
