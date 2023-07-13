#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char* name;		// 포인터 변수 선언( 문자열의 주소값 )
	int korean, english;
};


int main()
{
	struct student* sp;		// 구조체 포인터 변수
	sp = (struct student*)malloc(sizeof(struct student));	
	// struct student의 메모리 만큼이 할당된 구조체 포인터 변수

	sp->name = "홍길동";
	sp->korean = 90;
	sp->english = 95;
	printf("이름: %s, 국어: %d, 영어: %d\n", sp->name, sp->korean, sp->english);
	free(sp);

	return 0;
}
