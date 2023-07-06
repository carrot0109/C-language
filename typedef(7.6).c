#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int INT;              // int에 INT라는 새 이름을 부여함(코드의 간결화)
typedef int* PTR_INT;

typedef unsigned int UNIT;
typedef unsigned int* PTR_UNIT;

typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

int main()
{
	INT num1 = 10;
	PTR_INT pnum1 = &num1;    	// int* pnum1=&num1;

	UNIT num2 = 19;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);

	return 0;
} 
