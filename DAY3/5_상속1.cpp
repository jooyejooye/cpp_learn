// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>
/*
상속 : 기존 타입을 확장해서 새로운 타입을 만드는 것

표기법
C++		: Class Student : public Person
C#			: Class Student : Person
Python	: Class Student ( Person )
Java		: Class Student extends Person

Rust		: 상속 문법 없음

용어
Person	: Base(기반) class,			Super class,		Parent class
Student  : Derived(파생) class,		Sub class,		Child class
*/
class Person
{
	std::string name;
	int age;
};


class Student : public Person  // class 만들 때 : public Class_name 해놓으면 상속, Class_name이 만들어뒀던것 다 가져옴
{	
	int    id;
};
class Professor : public Person
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}
