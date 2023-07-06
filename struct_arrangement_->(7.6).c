#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
	int xpos, ypos;
};

int main()
{
	struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d %d]\n", pptr->xpos, pptr->ypos);      // *연산과.연산을 하나의 -> 연산으로 대체할 수 있음

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d %d]\n", pptr->xpos, pptr->ypos);

	return 0;
} 
