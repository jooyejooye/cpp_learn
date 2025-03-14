// 시험 문제 대비

int* p3 = nullptr; // c++11에서 포인터 의미의 0을 추가함


// 다음중 error?
int n = 1;
const     int c1 = 3;
const     int c2 = n; //-->  따라서 초기값으로 변수도 사용가능

constexpr int c3 = 3; // ok
constexpr int c4 = n; // error : 즉 초기값으로 변수 사용 안됨 : 핵심
