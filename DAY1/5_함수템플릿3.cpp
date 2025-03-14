#include <iostream>

// #1 decltype : 아래와 같은 템플릿의 반환 타입 만들 때 사용하기 위한 키워드

// decltype > 컴파일러 한테 물어보장 >> error >> a, b가 선언 안된 상태로 사용
/*
decltype(a+b) Add(T1 a, T2 b)
{
	return a + b;
}
>> 전위 표기법이 이상해
*/
template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	if (b == 0) return a; // decltype(a+b) 를 사용해서 return type 결정
	return a + b;
}

// #2. C++14 부터는 AUTO 만 표기해도 됨, 반환 타입 자체를 생략
/*
컴파일러에게 RETURN 문장 보고 추론해달라는 것
return 문장이 2개 이상이고 서로 다른 타입으로 반환하면 추론 못함. 컴파일 에러 발생
*/
template<typename T1, typename T2>
auto Add2(T1 a, T2 b) 
{
	if (b == 0) return a; // a = int >> return 이 달라 : ERROR
 	return a + b; // a = int, b=double
}

int main()
{
	std::cout << Add<int, double>(0.1, 2.2) << std::endl; // T1, T2 : TYPE 선언 미리 해두면 ERROR 아님
	std::cout << Add2(1, 2.2) << std::endl;
}