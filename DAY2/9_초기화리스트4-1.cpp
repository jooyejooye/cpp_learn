class Sample
{
	int n;
	const int c;  // const �� �ʱⰪ ���� ������
public:
	/*
	Sample(int v)
	{
		c = v; // error, const �� ���Ե� �� ����
	}
	*/
	
	Sample(int v) : c(v), n(0) // �ʱ�ȭ
	{ 
		n = 10;	
	}
};
int main()
{
	Sample(3);
}