#include <iostream>
#include <string>

/*
논리적 상수성 ( logical constness)

외부 사용자 입장에선 "상수 멤버 함수" 가 되는 것이 맞지만
클래스 멤버 함수 구현시 상수 멤버 함수 안에서 멤버 데이타 수정이 필요한 경우

해결책 : mutable 키워드
*/
class Point
{
	int x, y;

	// 상수 멤버 함수 안에서도 수정 가능하도록 하는 멤버 데이타 만들 때 사용
	mutable std::string cache;
	mutable bool cache_valid = false;
public:
	Point(int a, int b) : x(a), y(b) {}

	std::string to_string() const
	{
		if (cache_valid == false)
		{
			cache = std::to_string(x) + " ," + std::to_string(y);
			cache_valid = true;
			// x,y 가 변경되는 함수에서 cache_Valid = false 로 변경
		}
		
		return cache;
	}
};

int main()
{
	Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
	const Point p2(3, 2);
	std::cout << p2.to_string() << std::endl;
}
