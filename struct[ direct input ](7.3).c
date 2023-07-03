#include <stdio.h>
#include <stdlib.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct point pos = { 10,20 };          // 정의를 해준 후 초기화를 해주는 것이 아닌 동시에 해줌
	struct person man = { "이승기","010-1234-5678", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phonenum, man.age);


	return 0;
}
