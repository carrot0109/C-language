#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;    	// struct를 미리 선언하고 typedef 사용

typedef struct person          	// typedef와 struct를 동시에 사용
{				// 이 경우에는 Person을 동시에 사용해주었기 때문에 따로 person을 정의해주지 않아도 됨. 즉 typedef struct(person)
	char name[20];
	char phonenum[20];
	int age;
}Person;

int main()
{
	Point pos = { 10,20 };
	Person man = { "이승기","014186844",10 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d", man.name, man.phonenum, man.age);

	return 0;
} 
