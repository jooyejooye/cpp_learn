#include <iostream>

class Counter
{
	int cnt = 0;
public:
	Counter increment()  // ���� return �� �ƴ϶� �� return
	{
		++cnt;
		return *this;
	}
	Counter& increment2()  // ���� return �� �ƴ϶� �� return
	{
		++cnt;
		return *this;
	}
	int get() const { return cnt; }
	Counter(){}
	Counter(const Counter& c) : cnt(c.cnt)
	{
		std::cout << "copy ctor\n";
	}
	~Counter() 
	{
		std::cout << "~Counter\n";
	}
};

int main()
{
	Counter c,c1, c2;
	std::cout << "------------------------\n";
	c.increment();
	c.increment();
	c.increment();
	std::cout << "------------------------\n";
//[c1 ���纻 ���� c1-1 > C1-1 ���纻 ���� C1-2 > C1-2 �� ���纻 ���� C1-3 :: ���纻 3�� ����� ; ���� �ı�
	c1.increment(              ).increment(             ).increment();	
	std::cout << "------------------------\n";
	c2.increment2().increment2().increment2();
	std::cout << "------------------------\n";
	std::cout << c.get() << std::endl;
	std::cout << c1.get() << std::endl;
	std::cout << c2.get() << std::endl;
}

