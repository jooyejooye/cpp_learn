#include <iostream>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �ް� �ͽ��ϴ�.
	//   ��, �Էµ� ��� ���� �����Ǿ� �־�� �մϴ�.

	int n = 0;

//	int score[4]; // �̷��� ����� �ʿ� ���� �� ���� ����
	int size = 4;
	int* score = new int[size];
	int count = 0;
	
	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;
		score[count++] = n;

		if (size == count)
		{
			// 1. ���ο� �޸�(����) �Ҵ�
			int* temp = new int[size * 2];

			// 2. ���� ���� ���� > ���ο� ���ۿ� ����
			memcpy(temp, score, sizeof(int) * size);
			// score�� ����Ű�� �޸��� ������
			// temp �� ����Ű�� �޸𸮷� sizeof(int) * size ��ŭ ����

			// 3. ���� ���� ���� ����
			delete[] score;

			// 4. score �� ���ο� ���۸� ����Ű����
			score = temp;

			// 5. ũ�� ���� ����
			size = size * 2;

			// temp �� {} ��� �� �ڵ� �ı�
			std::cout << "out\n";
		}
	}

	std::cout << "count: " << count << std::endl;
	std::cout << "size: " << size;
}