// override  145 page ~

class Shape
{
public:
	virtual void draw() {};
	virtual void size() {};
};
class Rect : public Shape
{
public:
	// 1. 가상 함수를 override 할떄는 virtual 은 표시하지 않아도 된다
	//		그래도 virtual
	//	=>	virtual void draw()  {};  에서 virtual 없어도 동일
	void draw();

	// 2. 가상함수는 override 시 실수(오타) 가 있어도 
	// => 에러 안나고 
	// => 새로운 가상 함수로 취급 => 버그 유발!
	virtual void Draw() {};

	// 3. 2가 많은 버그 원인이 되었습니다
	// 그래서 C++11 에서 Overide 라는 키워드가 도입
	// =>	새로운 함수가 아니라 기존 함수를 override 한다고 알리는 것
//	virtual void Draw() override {} // error
	virtual void draw() override {}; // void draw() override {}; // virtual void draw() : 3다 동일
	// //
};
int main()
{

}
