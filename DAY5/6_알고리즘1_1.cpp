// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 200 page ~
int main()
{
	std::list<int>   s = { 1,2,33,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::find
	// �˻� ����: [ first, last )  // " ) " last�� �˻� ��� �ƴ� 
	// ��ȯ ��	: ã�� ���� ����Ű�� �ݺ���, ���н� last ��ȯ

	auto ret1 = std::find(s.begin(), s.end(), 33);
	auto ret2 = std::find(v.begin(), v.end(), 3);
	auto ret3 = std::find(v.begin(), v.end(), 2);

	if (ret1 == s.end()) { std::cout << "�˻� ����\n"; }
	else { std::cout << *ret1<<'\n'; }

	if (ret3 ==v.end()) { std::cout << "�˻� ����\n"; }
	else { std::cout << *ret3 << '\n'; }


}
