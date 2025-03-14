// C++ ���� �Լ� ���ڸ� ����� ��� : �ݵ�� �ܿ�� ��ġ��� �ϼ���
// 
// 1. ���� ���� �б⸸ �Ϸ��� �Ѵ� ( in parameter)
// -> ���� Ÿ���� primitive type �� ��� (int, double) 
//		call by value
//		void foo(int value)
// 
// -> ���� Ÿ���� user define type �� ��� (����ü, class)
//		const referene
//		void foo(const Rect& rc)
// 
// 
// 2. ���� ���� �����Ϸ��� �մϴ� (in out parameter)
//		������ ��� : void inc1( int* p) {++(*p);}
//		���۷��� ���: void inc2(int& r){++r;}
// 
// -> ���۷��� ����. �����ϰ� ������ ���� �ڵ�
// 
// ���ۿ��� c++ core gouideline �˻� �� 1st link > 
// C++ â���ڰ� ����� �֤��� C++ �ڵ��� ���� ��Ģ ����
//

void f1(int n) // call by value : ���纻
{
	int k = n;
}
/*
		mov     eax, DWORD PTR [rbp-20]
		mov     DWORD PTR [rbp-4], eax
*/
void f2(const int& n)
{
	// n �� reference ����, �����Ϸ����� ���������� ������ ����ϴ� ��� ��κ�
	int k = n; // int* = (���� ������) , ���� �����ͷ� �� ��������
	//���󰡼� �̿�, �޸� ���� 2�� �߻�
}
/*
		mov     rax, QWORD PTR [rbp-24]
		mov     eax, DWORD PTR [rax]
		mov     DWORD PTR [rbp-4], eax
*/
int main()
{
	int x = 100;
	f1(x);
	f2(x);
	
}
