// ���� ���� ���

int* p3 = nullptr; // c++11���� ������ �ǹ��� 0�� �߰���


// ������ error?
int n = 1;
const     int c1 = 3;
const     int c2 = n; //-->  ���� �ʱⰪ���� ������ ��밡��

constexpr int c3 = 3; // ok
constexpr int c4 = n; // error : �� �ʱⰪ���� ���� ��� �ȵ� : �ٽ�
