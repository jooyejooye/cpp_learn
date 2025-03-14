// 2_namespace.cpp - 교재 6 page
#include <stdio.h>
/*
1. 프로젝트 구성요소 논리적으로 분리
2. 이름 충돌 방지 가능
3. global namespace 라는 용어 의미
*/
namespace Audio
{
	// audio 관련 함수 전역변수 구조체 enum 등 작성
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

// global namespace : 어떠한 이름 공간에도 포함 안되는 영역
void init() { printf("System init\n"); }

int main()
{
	Audio::init();
	Video::init();
	init();
}
