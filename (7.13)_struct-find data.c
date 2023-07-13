#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct member{					
	char name[30];
	char gender;
	int age;
	char level[20];
};

int main()
{
	struct member mem[5] = { 
		{"홍길동",'M',49,"사장"},
		{"이몽룡",'M',25,"사원"}, 
		{"임꺽정",'M',39,"부장"},
		{"유관순",'F', 28,"과장"},
		{"김유신",'M', 43, "이사"}
	};	// 구조체 배열 선언 및 초기화
	int i;
	char name[20];

	for (i = 0; i < 5; i++) {
		if (mem[i].gender == 'M' && mem[i].age >= 40)    // 남성이고, 40대 이상만 출력
		{
			printf("이름: %s\n직위: %s\n", mem[i].name, mem[i].level);
		}
	}
	printf("\n");

	printf("검색할 직원 이름 입력: ");

	int isFind = 0;
	scanf("%s", name);
	for (i = 0; i < 5; i++) {				
		if (strcmp(mem[i].name, name) == 0) {		// 5명의 사람 중 동일한 이름을 갖는 사람의 정보만을 출력
			isFind = 1;								// 따라서 예외적인 경우를 구할 때는 다른 변수 활용
			printf("이름: %s \n 직위: %s \n나이: %d\n", mem[i].name, mem[i].level, mem[i].age);
		}
	}

	if (isFind == 0)
	{
		printf("그런사람은 존재하지 않습니다");
	}

	return 0;
}
