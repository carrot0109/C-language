define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

int main()
{
	Point pos1 = { 10,20 };
	Point pos2;

	pos2 = pos1;				// 복사

	printf("크기: %d\n", sizeof(pos1));
	printf("%d %d\n", pos1.xpos, pos1.ypos);
	printf("크기: %d\n", sizeof(pos2));
	printf("%d %d\n", pos2.xpos, pos2.ypos);


	return 0;
}
