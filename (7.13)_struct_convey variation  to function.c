#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	char name[20];
	int korean, english;
} stud; // 구조체를 새로운 데이터 형 stud로 선언

char* search(stud* aa, char* name) {
	int i;
	if (strstr(aa->name, name)) {	// 둘을 비교해서 시작위치를 반환해줌 -> 참
		return aa->name;			// char형 포인터 함수로 문자 그대로 반환
	}
	else
		return NULL;
}

int main()
{
	stud students[3] = { 
		{"Hong Gil Dong",95,83},
		{"Park Gi Dong",90,78},
		{"Kim Gi Jong",79,77} 
	};
	char* name = "Dong", i;
	char* result = (char*)malloc(50);

	for (i = 0; i < 3; i++)
	{
		result = search(&students[i],name);
		if (result)				// 문자열 받아서 '참'
			printf("%s\n", result);
	}
	free(result);

	return 0;
}
