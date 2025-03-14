#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age) : name(name), age(age) {}
};

class Student : public People
{
	int id = 0;
public:
	Student(const std::string& name, int age, int new_id) : People(name, age) , id(id)
	{
		std::cout << "done" << std::endl;
	}
};

/*
1. people 에서 파상된 student 만드세요
2. int id 멤버 데이터 추가하세요
3. student 생성자 만ㄷㄹ어 보세요
4. main 에서 student 객체 생성해보세요
*/

int main()
{
	Student me("jooye",27, 3);
	Student s1("bona", 22, 4);
}



