#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};


int main()
{
	struct point arr = { 10,20 };

	printf("arr의 주소값: %p \nxpos의 주소값: %p", &arr, &arr.xpos);    // 구조체 변수의 주소값과 첫번째 인자의 주소값이 동일함

	return 0;
} 
