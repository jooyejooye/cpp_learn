// 2_복사생성자1.cpp
#include <iostream>
// 컴파일러 최적화 때문에 생략된 "복사 생성자" 호출을
// 확인하려면 
// g++ 로 아래 처럼 "최적화 하지 말라" 는 옵션 전달
// 
// f5() 제대로 보려면 아래처럼
// g++ aaa.cpp -fno-elide-constructors  
class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}  
	Point(int a, int b) : x(a), y(b) {}  
	// 언제 호출 되는지 확인 위해서 복사 생성자에서 로그
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) { } // call by value : 복사본 생성
void f2(Point& p) {} // call by reference : 복사본 생성 안됨

Point pt(1, 1);

Point  f3() { return pt; }	// return by value : return 을 복사본으로 
Point& f4() { return pt; }	// return by reference : return을 원본으로

int main()
{
	Point p1(1, 2);		
	// 복사 생성자가 사용되는 경우 3가지
	// 1. 자신과 동일 한 타입의 객체로 초기화 될 때
//	Point p2(p1);
//	Point p3 = p1;

	// 2. 함수 인자로 call by value를 사용 할 때
//	f1(p1); // call by value, Point p = p1 의미 , 즉 복사본 만들 때 복사 생성자 호출
//	f2(p1); // call by reference 

	// 3. 함수가 객체를 값으로 반환 할 때 ( return by value )
//  f3();
//	f4();	

	f5();
}	
//------------------------
Point f5()
{
	Point p1(1, 1);

	return p1;	// 1. p1 을 사용해서 리턴용 복사본 만들고
	// 2. p1 은 파괴(소멸자 호출됨)
	// 3. 복사본 반환
}
 // 리턴된 복사본은 이 문장의 끝에서 파괴됨.

// 아래 코드를 평가해 보세요
// => 잘못된 코드 입니다.
// => 지역변수는 절대 참조 반환하면 안됩니다.
// => 파괴되지 않은것(전역변수, static 지역변수, 멤버데이타)만
//    참조 반환 가능합니다. ( 임시객체에서 좀더 자세히)
Point& f6()
{
	Point p1(1, 1);
	return p1;
}