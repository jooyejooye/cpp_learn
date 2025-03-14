#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
	//Point pt(1, 2);  // pt 는 이름 있는 객체 (named object)
						// 이름이 있으므로 여러 문장에서 접근 가능
						// 수명 : 자신을 선언한 { } 을 벗어 날 떄 파괴

	Point (1, 2);     // 이름 없는 객체 (unnamed object)
						// <= 함수 호출 아님, point 는 함수 아님
						// 이름이 없으므로 다른 문장에서 사용 못함
						// 수명은 ";" 를 만나면 파괴
						// 
						// 임시 객체 (temporary) 라고 불림
						// Rust 언어 에서도 아주 중요하게 다루는 주제
						// 

	std::cout << "-------" << std::endl;
	Point(3, 4), std::cout << "oo\n";  // 콤마 연산자는 두 개의 표현식을 하나로 결합하는 연산자이다.
	std::cout << "-------" << std::endl;

}





