
int main()
{
	int sz1 = 10;
	const int sz2 = sz1;
	const int sz3 = 10;
	constexpr int sz4 = 10;

	int x1[10];  // ok
	int x2[sz1]; // C89 - ERROR , C98-OK, C11-ǥ�ؿ��� �����Ϸ� ���� �ٸ� �� �ִ� ����
	/*
	C++ : 	ǥ�ؿ��� �迭�� ũ��� ������ �ð��� �˾ƾ� �Ѵٰ� ����
	g++ clang�� Ȯ�� �������� ���
	visual studio ������ error
	*/
	int x3[sz2]; // ������ �� �� �� > ERROR
	int x4[sz3]; // OK : �����Ϸ��� ���� �� �� �ִ�
	int x5[sz4]; // OK 
}