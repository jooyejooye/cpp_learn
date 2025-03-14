// 상수 멤버 함수는 선택이 아닌 필수!
//		객체의 상태를 변경하지 않은 모든 멤버 함수는 반드시 상수 멤버 함수로 해야함
//		getter(get__) 류의 함수들은 모두 상수 함수 이어야 함
// 
// github.com/webkit
// webkit > source/WFT/wft 에서 seconds.h 멤버 함수 볼것
// 


class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

	int getArea() const { return w * h; } // getarea 에는 const 사용해야함
};
// void foo(Rect r) // call by value, 복사본 오버헤드 존재
// r 는 const > getarea 못씀 > 틀린 코드
void foo(const Rect& r)
{
	int n = r.getArea(); 
}

void foo(const Rect& r)
{
	int n = r.getArea();
}
int main()
{
	Rect r(1, 1, 10, 10);
	int n = r.getArea(); 
	foo(r);
}



