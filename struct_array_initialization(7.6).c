#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
	char name[20];
	char phone[20];
	int age;
};

int main()
{
	struct person arr[3] = {
		{"이승기","01012345678",30},
		{"유재석","01049848946",40},
		{"김하성","01048945788",35}      // 만약 arr[0]만 초기화해주고 나머지를 초기화 해주지 않을 시에는 0으로 출력됨
	};

	int i;
	for(i = 0; i < 3; i++)
	{
		printf("%s %s %d \n", arr[i].name, arr[i].phone, arr[i].age);
	}

	return 0;
} 
