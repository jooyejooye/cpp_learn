class network_error {};
#include<iostream>
/*
python c# java : 예외를 아주 많이 사용합니다

c++ 관례
간단한 오류에 대한 처리: 함수 반환 값으로 처리
심각한 오류 (처리	하지 않으면 종료 되는게 좋은 경우) : 예외 사용
-> 많은 임베디드 개발에서 예외 사용 하지 않음

*/
void f3()
{
	network_error e;
	throw e;  // throw 발생하면 catch 가 있는 곳으로 바로 건너 감
				// 대부분의 컴파일러는 e 객체의 보사본을 heap 에 생성
				// 약간의 오버헤드 존재 (heap) 떄문에, 
				//		간단한 예외 : return
				//		중요한 예외: throw
}
void f2()
{
	f3();
}
void f1()
{
	f2();
}
int main()
{
	try
	{
		f1();
	}
	catch (const network_error& e)
	{
		// catch 끝에서 힙에 있는 던져진 객체 e를 delete 하는 코드가 추가됩니다.
	}
}