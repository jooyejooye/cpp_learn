// 3_추상클래스 - 157page ~
//	순수 가상함수가 한개 이상 있는 클래스
//  특징: 객체를 만들 수 없다
//  의도: 파생 클래스 설계자에게 약속된 함수를 반드시 만들라고 지시하는 것
// //
class Shape
{
public:
	virtual void Draw()  = 0; // 순수 가상함수(pure virtual function)
									// =>	구현부가 없고 "=0" 으로 표기
};
class Rect : public Shape
{
public:
	void Draw() override {};
};
int main()
{
//	Shape s; // error : 순수 가상 함수는 선언 불가
//	Rect  r; // Shape > Draw() 의 구현을 제공하지 않으면 Rect 추상 클래스
			//										제공하면 Rect 추상 클래스 아님	
			// 										
}


