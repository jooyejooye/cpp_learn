#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	// 1. 생성자가 한개도 없으면 컴파일러가 디폴트 생성자 제공 > 이러면 초기값 없는 잘못된 메모리 생성됨 
	// 
	// 2. 되도록이면 생성자를 만들어서 멤버 데이터 초기화 할 것!
	// 
	People(const std::string& name, int age): name(name), age(age){}
};

int main()
{
//	People p; // 초기화 되지 않은 객체의 생성 : 좋은 코드 아님
	People p("kim", 2);
}



