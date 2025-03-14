#include <string>
#include <iostream>
#include <algorithm> // 대부분 알고리즘은 여기 있습니다

int main()
{
	std::string s = "ABCD";
	do
	{
		std::cout << s << std::endl;
	} while (std::next_permutation(s.begin(), s.end()));
}

// cppreference.com >> std::find 검색 후 상위 문서 클릭