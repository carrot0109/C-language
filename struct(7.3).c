#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
	int xpos, ypos;				// 구조체 point의 정의
};

int main()
{
	struct point pos1, pos2;

	double distance;

	fputs("point1 pos: ", stdout);
	scanf_s("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf_s("%d %d", &pos2.xpos, &pos2.ypos);
	
	int distX = pos1.xpos - pos2.xpos;
	int distY = pos1.ypos - pos2.ypos;

	distance = sqrt((double)(distX * distX + distY * distY));
	printf("두 점의 거리는 %g입니다.", distance);

	return 0;
}
