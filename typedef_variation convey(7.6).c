#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos)
{
	printf("%d %d \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("INPUT CURRNET POS: ");
	scanf("%d%d", &cen.xpos, &cen.ypos);		// 값을 입력
	return cen;									// struct point변수 cen에 값을 입력해주고 반환
}

int main()
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);						// 반환받은 값을 그대로 ShowPosition 함수에 대입

	return 0;
} 
