#include <string>
#include <iostream>
#include <algorithm> // ��κ� �˰����� ���� �ֽ��ϴ�

int main()
{
	std::string s = "ABCD";
	do
	{
		std::cout << s << std::endl;
	} while (std::next_permutation(s.begin(), s.end()));
}

// cppreference.com >> std::find �˻� �� ���� ���� Ŭ��