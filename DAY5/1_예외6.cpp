#include<vector>
#include<iostream>

int main()
{
	std::vector<int> v(4, 0);

	// [] ������  : �ε����� �߸� �Ǿ����� Ȯ�� ����. �߸� ���޵Ǹ� ������ ���� �� �� ����
	//v[10] = 10;			// ptr[idx]  = value

	// at( ) �Լ� : �ε����� �߸��Ǹ� ���� �߻�
	
	//v.at(9)	= 3;			// if ( idx > sz ) throw std::out_of_range

	try
	{
		v[10] = 10;
		//v.at(8) = 4;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << " out of range";
	}
}