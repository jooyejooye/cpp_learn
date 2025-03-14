#include <iostream>

// friend 79page ~

class Bike
{
	int gear = 0;
public:
	void setGear(int n) { gear = n; }

	// friend 함수 : 멤버 함수는 아니지만 private 멤버에 접근 할 수 있게 해달라는 의미
	friend void fixBike();

	// 1. Set get 함수를 사용하면 되는데 왜 friend 함수 만드나요?
	//		=> set get 을 제공하는 것은 모든 곳에서 접근 가능하게 하는 것
	//		=> friend 는 특정 함수에게만 접근 권한을 주는 것
	// 
	// 2. 멤버 함수로 만들면 되지 않나요? 왜 일반 함수로 하나요?
	//		=> 멤버 함수로 할 수 없을 떄가 있습니다 (연산자 재정의)
	// 
	// 3. private 으로 막았는데 다시 open 하는 것은 안좋지 않나요?
	//		=> 그래서 비판이 많은 문법
	//		=> C++ 에만 있는 문법. 다른 언어에는 없음
	// //
	};

void fixBike(Bike& b)
{
	Bike b;
	b.gear = 10;
}

int main()
{
	Bike b;
	fixBike(b);
}