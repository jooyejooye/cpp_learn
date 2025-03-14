// protected.   135 page ~

class Base
{
private:   int a;	
protected: int b;	// protected private 처럼 외부 접근 안됨 / 파생 클래스 접근 가능
public:    
	int c;	
	void set_b(int newa)
	{
		b = newa;
	};

};
class Derived : public Base  
{
public:
	void foo()
	{
	//	a = 0;		// error : 접근 안됨, private member는 파생 클래스라도 접근 안됨, 변경하려면 set_a(0) 해야함	
		b = 0;  	// ok,	 외부에서는 안되지만 파생 클래스 에서는 접근 가능
		c = 0;		// ok
	}
};
int main()
{
	Base base;
//	base.a = 0; // error
//	base.b = 0; // error // protected private 처럼 외부 접근 안됨
	base.c = 0; // ok
	base.set_b(3);
}
