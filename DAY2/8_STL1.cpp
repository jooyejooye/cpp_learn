#include <iostream>
#include <string> // �̰� �־���� string ��� ����

int main()
{
	// #1. C ����� ���ڿ�
	// C ���� ����Ÿ��(char) �� �ְ�, ���ڿ� Ÿ�� ����
	// ���� Ÿ���� �迭�̳� ������ ���
	char cs1[] = "hello";
	char cs2[] = "hello";


	// ���� : ���ڿ� ���� �ڵ尡 ���������� ����
	if (cs1 == cs2) {} // ���ڿ� �񱳰� �ƴ� �迭 �ּ� �� 
	if (strcmp(cs1, cs2)==0) {} // ���ڵ尡 ���ڿ� ��

	// #2. C++ ����� ���ڿ� Ÿ��
	// std::string �̶�� Ÿ�� �̹� ����

	std::string s1 = "hello";
	std::string s2 = "hello";

	auto s3 = s1 + s2;

	if(s1==s2){ std::cout << "same"; }

	if (s2 > s1) {
		std::cout << "big";
	}

	auto n = s1.size(); //5
}