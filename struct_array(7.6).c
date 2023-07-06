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
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("점의 좌표 입력: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
	{
		printf("[%d %d] ", arr[i].xpos, arr[i].ypos);
	}

	return 0;
} 
