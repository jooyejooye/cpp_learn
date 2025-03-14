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
Ŭ�� ���� �� ���� ��� ����Ÿ�� �Ʒ� �κп� ��ġ�ϴ� ��찡 �����ϴ�.
-> ����� ���忡���� �Լ��� �߿��ϹǷ� �Լ��� ���� �����ֱ� ����
*/