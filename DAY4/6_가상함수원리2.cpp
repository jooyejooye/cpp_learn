#include <iostream>

//가상함수를 사용하면 컴파일러가 아래와 같이 많은 코드를 추가 합니다.
/*
가상 함수를 사용시 오버헤드

1. 메모리 오버해드
=>		클래스 당 한개의 가상함수 테이블 (배열)
		가상 함수가 1000개라면  1000* 포인터 크기 만큼 오버해드
	
=>		객체당 한개의 가상함수 테이블을 가리키는 포인터

2. 속도에 대한 오버헤드
=>		직접 호출이 아니라, 메모리에서 주소를 꺼내서 호출해야 합니다
		2~3 회 정도의 메모리 접근이 필요 (컴파일러 마다 원리는 약간 씩 다를 수 있음)

		20~30 % 정도 차이 남
	*/


void* animal_vtable[] = {Animal_TYPE_INFO, &Animal::Cry, &Animal::Run }; // 모든 가상함수의 주소 보관
// 가상 함수 주소만큼 배열에 추가


class Animal
{
	void* vtptr = animal_vtable; // <= 컴파일러가 이 코드 추가
	int age;
public:
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------


void* dog_vtable[] = { Dog_TYPE_INFO, &Dog::Cry, &Animal::Run }; 
// override 한 곳만 주소 변경
class Dog : public Animal
{
	void* vtptr = dog_vtable;
	int color;
public:
	virtual void Cry() override {}
};

int main()
{
	Animal a1, a2;
	Dog    d;
	Animal* p = &d;
	p->Cry();   
	/*
	    mov     rax, QWORD PTR [rbp-8]		: p* = rbp-8  >> [ ] >> 내용 꺼내기 : rax에 저장
        mov     rax, QWORD PTR [rax]			: [rax] : 내용 한번 더꺼내서 rax 저장
        mov     rdx, QWORD PTR [rax]			: [rax] : 내용 한번 더꺼내서 rdx 저장
        mov     rax, QWORD PTR [rbp-8]
        mov     rdi, rax
        call    rdx									: rdx 실행
	*/

}

/*
Animal 가상함수 테이블 (배열)
	animal_type_Info           /// 이것도 주소?
	& animal :: cry
	& animal :: run

Dog 가상함수 테이블 (배열)
	Dog_type_Info           
	& Dog :: cry
	& animal :: run

---------------------------------------------------------

Animal 객체 [2000번지]
	vtpr* = Animal 가상함수 테이블 
	age

Dog 객체 [1000번지]
	vtpr* = Dog 가상함수 테이블
	age
	color

Animal* p = 1000(&d) ; 이라고 할때

1. p가 가상이 아니면 : animal cry 호출
2.		 가상이면,		: 몇번째  가상함수 인지 순서를 조사, 그리고 아래 의미의 기계어 코드 생성
		p -> vtptr 첫번째 함수 호출(cry) ] () ; 이라는 의미의 기계어 코드 생성
		p -> vtptr : ( ) 가상함수 테이블
						   가상함수 테이블 > 몇번째 함수 주소 가져오기



vtable for Dog:
		.quad   0
		.quad   typeinfo for Dog
		.quad   Dog::Cry()
		.quad   Animal::Run()
vtable for Animal:
		.quad   0
		.quad   typeinfo for Animal
		.quad   Animal::Cry()
		.quad   Animal::Run()
*/
