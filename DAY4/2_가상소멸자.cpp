// 148 page ~
#include <iostream>

// �ٽ� : ��� ������ ����Ѵٸ� ��� Ŭ������ �Ҹ��ڴ� �ݵ�� virtual�� �ϼ��� 
//			=> ���� �Ҹ��� ��� �Ҹ��� �����Դϴ�.
// 
// ��� Ŭ���� �Ҹ��ڰ� virtual �� �ƴϾ
//	=> derived �Ҹ��ڰ� �ϴ� ���� ���� ���� ������ ���� �ʽ��ϴ�
//	=> �׷��� ������ �ڵ带 �ۼ��ϱ� ���ؼ�
//	=> ��� Ŭ���� �Ҹ��ڴ� �ݵ�� virtual�� �ϼ���
// // 

class Base
{
public:
	Base()  { std::cout << "Based()" << std::endl; }
	virtual~Base() { std::cout << "~Based()" << std::endl; }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	virtual ~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d; // ���� ����

	Derived* p = new Derived;
	delete p;  // ���� ����
	/*
	Based()
	Derived()
	~Derived()
	~Based()
	*/


	Base* p = new Derived;           // 1. sizeof(Derived) ũ�� �޸� �Ҵ�
											 // 2. ������ ȣ��
	delete p;  // �޸� ������ ����
	// 1. �Ҹ��� ȣ�� : p -> �Ҹ���()
	// 2. �޸� ���� 
	// 
	// -----------------------------------------------------------------
	// �Ҹ��� ȣ�⵵ �ᱹ �Լ��� ȣ���Դϴ� p->�Ҹ���()
	// 
	// 1. �Լ� ȣ�� ��, static binding ����, dynamic binding ���� �����ؾ���
	// 2. �����Ϸ��� p ��ü�� Ÿ�Ը� �˱� ������,
	//		p �� Ÿ���� base �� Ŭ������ �������� �ƴ��� ������
	// 
	// Base �Ҹ��ڰ� ������ �ƴϸ� : static binding 
	//							   ������ Ÿ������ ȣ���ϹǷ�
	//							   ~Base() �� ȣ���.!
	// 
	// Base �Ҹ��ڰ� ������ �̸�   : dynamic binding 
	//							    p�� ����Ű�� ���� �����ؼ� ȣ�� ����
	//								p�� Derived ��ü�� ����Ű��
	//								~Derived() ȣ��

	/*
	Based()
	Derived()
	~Based()
	*/
}