#include <iostream>

// #1 decltype : �Ʒ��� ���� ���ø��� ��ȯ Ÿ�� ���� �� ����ϱ� ���� Ű����

// decltype > �����Ϸ� ���� ����� >> error >> a, b�� ���� �ȵ� ���·� ���
/*
decltype(a+b) Add(T1 a, T2 b)
{
	return a + b;
}
>> ���� ǥ����� �̻���
*/
template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	if (b == 0) return a; // decltype(a+b) �� ����ؼ� return type ����
	return a + b;
}

// #2. C++14 ���ʹ� AUTO �� ǥ���ص� ��, ��ȯ Ÿ�� ��ü�� ����
/*
�����Ϸ����� RETURN ���� ���� �߷��ش޶�� ��
return ������ 2�� �̻��̰� ���� �ٸ� Ÿ������ ��ȯ�ϸ� �߷� ����. ������ ���� �߻�
*/
template<typename T1, typename T2>
auto Add2(T1 a, T2 b) 
{
	if (b == 0) return a; // a = int >> return �� �޶� : ERROR
 	return a + b; // a = int, b=double
}

int main()
{
	std::cout << Add<int, double>(0.1, 2.2) << std::endl; // T1, T2 : TYPE ���� �̸� �صθ� ERROR �ƴ�
	std::cout << Add2(1, 2.2) << std::endl;
}