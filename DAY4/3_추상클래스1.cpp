// 3_�߻�Ŭ���� - 157page ~
//	���� �����Լ��� �Ѱ� �̻� �ִ� Ŭ����
//  Ư¡: ��ü�� ���� �� ����
//  �ǵ�: �Ļ� Ŭ���� �����ڿ��� ��ӵ� �Լ��� �ݵ�� ������ �����ϴ� ��
// //
class Shape
{
public:
	virtual void Draw()  = 0; // ���� �����Լ�(pure virtual function)
									// =>	�����ΰ� ���� "=0" ���� ǥ��
};
class Rect : public Shape
{
public:
	void Draw() override {};
};
int main()
{
//	Shape s; // error : ���� ���� �Լ��� ���� �Ұ�
//	Rect  r; // Shape > Draw() �� ������ �������� ������ Rect �߻� Ŭ����
			//										�����ϸ� Rect �߻� Ŭ���� �ƴ�	
			// 										
}


