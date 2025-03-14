#pragma once
class Vector
{
public:
	Vector(int size, int value = 0);
	~Vector();
	int& at(int idx);
	void resize(int newsize);
	int size();
	bool empty();

private:
	int* ptr;
	int sz;
};


/*
클라스 만들 때 보통 멤버 데이타를 아래 부분에 배치하는 경우가 많습니다.
-> 사용자 입장에서는 함수가 중요하므로 함수를 먼저 보여주기 위해
*/