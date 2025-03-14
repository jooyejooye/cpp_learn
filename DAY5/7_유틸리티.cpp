// 7_��ƿ��Ƽ
#include <iostream>
#include <tuple>
#include <vector>

// �ٸ� �� �����ϴ� ������ ��κ� C++���� �ֽ��ϴ�.
// => ���� ������ ���� ���� ����ϴٴ� Ư¡�� �ֽ��ϴ�.

// s = [1,2,3]    ���̽� ����Ʈ : ���� Ÿ���� ��ü�� ������ ����
// t = (1, 3.4)   ���̽� Ʃ�� : �ٸ� Ÿ���� ��ü�� ������ ����

int main()
{
	std::vector<int> v = { 1,2,3,4,5 }; // ���̽� ����Ʈ

	std::tuple<int, double, char> t(1, 3.4, 'A'); // Ʃ�� : c++ 11
//	std::tuple<int, double, char[2]> t2(1, 3.4, "A"); // error
	std::tuple<int, double, const char*> t3(1, 3.4, "A"); // ok, �迭�� �����ͷ� ġȯ ����
	std::tuple<int, double, std::string> t4(1, 3.4, "A"); // ok

	char a1[2] = "a";
//	char a2[2] = a1; // error , �迭�� ���� �Ұ���

//	STL �����̳ʴ� ���� �� �� �ִ� Ÿ�Ը� ���� �����մϴ� >> char[2] �� �迭������ ���� �Ұ���


//	std::tuple t(1, 3.4, 'A'); // Ʃ�� : c++ 17 ���� Ÿ�� ���� ����

	// ������ ��ƽ��ϴ�.
	std::cout << std::get<1>(t); // 3.4
	std::cout << std::get<2>(t); // 'A'
	std::cout << std::get<2>(t); // 'A
}

/*
'A'		: �޸𸮿� 65 �� ���� �ƽ�Ű �ڵ�		char Ÿ��
"A"	: �޸𸮿� 65, 0  �Դϴ�. {65, 0 } == {'A','/0'}		char[2] Ÿ��

*/