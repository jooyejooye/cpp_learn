// 1_���۷���2-2
#include <iostream>



int main()
{
	int n = 0;
	int* p1 = &n;
	*p1 = 10;

    // ���� �ڵ� ��
    //
	int& r1 = n;  // r1 ���� ������ = &n
	r1 = 10;       // *(r1 ���� ������  )=10

}
/*
* reference�� �����̶�� �������
* ���� �����Ϸ��� ���������� �����Ϳ� ������ ������ ����  > �� ����ȭ �ϸ� ���� ������ �����ʹ� ���� �� �� �ֽ��ϴ�
* 
* c++ ǥ�� ���� : ���۷��� ����
* > �����Ϸ� ������ ��Ȳ�� ���� ���������Ͱ� ������� �� �ִ�
* 
* 
main:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], 0

        lea     rax, [rbp-20]
        mov     QWORD PTR [rbp-8], rax

        mov     rax, QWORD PTR [rbp-8]
        mov     DWORD PTR [rax], 10

        lea     rax, [rbp-20]
        mov     QWORD PTR [rbp-16], rax

        mov     rax, QWORD PTR [rbp-16]
        mov     DWORD PTR [rax], 10
        mov     eax, 0
        pop     rbp
        ret
*/