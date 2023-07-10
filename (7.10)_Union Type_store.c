#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef union
{
	int mem1;
	int mem2;
	double mem3;
} UBox;


int main()
{
	UBox ubx;
	ubx.mem1 = 20;
	printf("%d\n", ubx.mem2);    // mem1,2,3 모두 같은 20의 값 저장

	ubx.mem3 = 7.15;
	printf("%d\n", ubx.mem1);    // int형이므로 쓰레기값 
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);
	
	return 0;
}
