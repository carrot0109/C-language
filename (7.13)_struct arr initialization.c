#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct score {					// 무슨 변수인지 표기
	char name[30];
	int kor;
	int eng;
	int math;
	int total;
	float avr;
};

int main()
{
	struct score Class[3] = { {"강아지",95,87,97,},
		{"박기동",99,89,80,},{"홍길동",88,77,66} };	// 구조체 배열 선언 및 초기화
	int i;
	for (i = 0; i < 3; i++)
	{
		Class[i].total = Class[i].kor + Class[i].eng + Class[i].math;
		Class[i].avr = (float)Class[i].total / 3.;

		printf("이름: %s,국어: %d,영어: %d,수학: %d", Class[i].name, Class[i].kor, Class[i].eng, Class[i].math);
		printf("총점: %d, 평균: %5.1f\n\n", Class[i].total, Class[i].avr);
	}

	return 0;
}
