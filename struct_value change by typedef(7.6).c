#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr)
{
	ptr->xpos = (ptr->xpos) * -1;		// 저장되어 있는 값 변환(원점 대칭)
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("%d %d\n", pos.xpos, pos.ypos);
}

int main()
{
	Point pos = { 7,-5 };		// 초기화
	OrgSymTrans(&pos);
	ShowPosition(pos);
	OrgSymTrans(&pos);
	ShowPosition(pos);

	return 0;
}
