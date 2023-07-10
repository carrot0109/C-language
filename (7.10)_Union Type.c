#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int mem1;
	int mem2;
	double mem3;
} SBox;

typedef union      // 공용체(전체적으로 double형 만큼의 메모리를 차지하고 있다)
{
	int mem1;        // 여러 형으로 저장
	int mem2;
	double mem3;
} UBox;


int main()
{
	SBox sbx;
	UBox ubx;
	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	printf("%d %d \n", sizeof(SBox), sizeof(UBox));

	return 0;
}
