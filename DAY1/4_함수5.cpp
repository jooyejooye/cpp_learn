//  후위 반환 타입 - 42page
/*
* int square(int a)
{
	return a * a;
}

*/

//c++11 에서 도입된 새로운 함수 모양 : 후위 반환 타입(suffix return type) 이라는 문법
// 왜?? 기존 표기법이 어떤 문제가 있길래 새로운 문법이 추가되었나요 ?
// #1. 반환값이 복잡할때 후위 반환이 편리합니다.
// #2. 복잡한 템플릿 만들때 후위 반환만 가능한경우가 있습니다
// #3. 람다표현식 에서 사용하기 위해.
auto square(int a) -> int
{
	return a * a;
}
int main()
{
	square(3);
}
