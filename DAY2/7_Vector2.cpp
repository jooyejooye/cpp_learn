#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "�л����� >> ";
	std::cin >> cnt;

	// 3. �Էµ� �л��� ��ŭ �ٽ� ������ �Է� �޾ƾ� �մϴ�.
	//int score[cnt];     // array�� ���鶧 ũ�⸦ ������ �� �� ���� 
							 // g++ �� �Ϻ� �����Ϸ��� ����, c++ ǥ�ؿ� ������ ����
							
							 
	// ���� �ð� ������ ������ �޸� �Ҵ��Ϸ��� " ���� �Ҵ�" �ۿ� �ȵ�
	// C :		malloc / free
	// C++   new / delete
	// 

	int* score = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		std::cin >> score[i];
	}
	delete[] score;
	
}