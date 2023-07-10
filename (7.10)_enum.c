#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef enum syllable
{
	Do = 1, Re, Mi, Fa, So, La, Ti      // const상수를 정의한 것처럼 Do,Re...등을 정의
} Syllable;

void sound(int sy)
{
	switch (sy)
	{
	case Do:
		puts("도는 하얀 도라지");return;
	case Re:
		puts("레는 둥근 레코드");return;
	case Mi:
		puts("미는 파란 미나리");return;
	case Fa:
		puts("파는 예쁜 파랑새");return;
	case So:
		puts("솔은 작은 솔방울");return;
	case La:
		puts("라는 라디오");return;
	case Ti:
		puts("시는 졸졸 시냇물");return;
	}
	puts("다 함께 부르세");
}

int main()
{
	sound(1 + 3);  

	return 0;
}
