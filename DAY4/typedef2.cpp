// 
int a;		// a�� int Ÿ�� ����
double d;	// d�� double Ÿ�� ����
int arr[2]; // arr �迭 ����

void foo();	// foo �� �Լ� ����

void(*f)();	// f �� �Լ� ������ ����
int(*p)[2];	// p �� �迭�� ����Ű�� ������ ����

// typedef : ���� ��ġ�� �ɺ��� Ÿ������ �ش޶�.

typedef int A;		// A�� int Ÿ�� Ÿ��
typedef double D;	// D�� double Ÿ��  Ÿ��
typedef int ARR[2]; // ARR �迭  Ÿ��
// using ARR = int[2]
typedef void FOO();	// FOO �� �Լ�  Ÿ��
typedef void(*F)();	// F �� �Լ� ������  Ÿ��
typedef int(*P)[2];	// P �� �迭�� ����Ű�� ������  Ÿ��

int main()
{
	A n1 = 10;
	D d1 = 2.3;

	ARR x = { 1,2 };

	F f1 = nullptr; // f �� �Լ� ������ Ÿ��.
	// void(*f1)() = nullptr;
	P p1 = &x;

	FOO ff; // FOO �� �Լ� Ÿ���̹Ƿ�
	// �� �ڵ�� ff ��� �Լ��� ���� �Դϴ�.
	// void ff(); �Դϴ�.
}