#include<vector>
#include<iostream>

int main()
{
	std::vector<int> v(4, 0);

	// [] 연산자  : 인덱스가 잘못 되었는지 확인 안함. 잘못 전달되면 비정상 종료 될 수 있음
	//v[10] = 10;			// ptr[idx]  = value

	// at( ) 함수 : 인덱스가 잘못되면 예외 발생
	
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