#include <iostream>



class Date
{
	int year;
	int month;
	int day;

	// �Ʒ� ���� ����Ÿ�� 
	// => ��¥ ���� ����Ÿ ������
	// => Ư�� ��¥ ��ü�� ������ �ִ� ���� �ƴ�
	// => Date ��� Ŭ������ ���� �ִ� ����Ÿ.
	// => �̷� ����Ÿ�� static ����� �ؾ� �մϴ�.
	inline static int days[12] = { 30,28,30,30,30,30,30, 30,30,30,30,30 }; // ���߿� �����ϼ���


public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day } {
	}
	int get_day() const { return day; }
	void set_day(int d) { day = d; }
	//---------------------------------------

	Date after_days(int ds)
	{
		Date tmp(year, month, day + ds); // �߸��� ����
		// ������ ����� ������ ������
		return tmp;
	}
};

int main()
{
	Date d(2025, 3, 12);

	Date d2 = d1.after_days(1000); // 1000�� ���� ��¥�� �˰� �ʹ�.

	//------------------------------------
	// 5���� ���ϱ��� �ִ��� �˰� �ʹ�. - ������ ������ ������
	// => 2���� �����ϴ�
	// ��� #1.
	Date d3(2025, 5, 1);
	int n1 = d3.days_in_month();

	// ��� #2.
	int n2 = Date::days_in_month(5);

	// ���� ��¥�� �˰� �ʹ�.
	// => ������ "�����̶�� ���س�¥�ʿ�"
	// => non-static!
	Date today(2025, 3, 12);
	Date d4 = today.tomorrow();

	// �������� �˰� �ʹ�. > �Ѵ� ������
	// ��� #1.
	bool b1 = today.is_leap_year();

	// ��� #2.
	bool b2 = Date::is_leap_year(2025);


}