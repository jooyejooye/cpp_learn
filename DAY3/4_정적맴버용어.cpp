// 4_정적멤버용어.cpp
class Test
{
	// C++							// java, C#
	int data1;	// non-static member data		instance field
	static int data2;	// static member data			static   field

public:
	void f1() {}		// non-static member function	instance method
	static void f2() {}	// static member function		static   method
};
// rust
// 일반 함수 : function
// 멤버 함수 : method
// static멤버함수 : associated function