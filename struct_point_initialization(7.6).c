#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
	int xpos, ypos;
};

struct circle
{
	double radius;
	struct point* center;		// 구조체 포인터 변수 선언
};

int main()
{
	struct point cen = { 2,7 };		// 초기화
	struct point cen2 = { 3,7 };		
	double rad = 5.5;				
	
	struct circle ring = { rad,&cen };		// 초기화_struct point* center = &cen;
	struct circle ring2 = { rad, &cen2 };

	printf("원의 반지름: %g\n",ring.radius);
	printf("원의 중심: %d, %d", ring.center->xpos, ring.center->ypos);		    	// ->를 이용한 출력
	printf("원의 중심: %d, %d", (*ring2.center).xpos, (*ring2.center).ypos);	  // 참조연산자를 이용한 출력

	return 0;
} 
