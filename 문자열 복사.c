#include <stdio.h>

int main()
{
	char str[30] = "C Programing language";		// 문자열 초기화
	char target[100], i;						// 문자열 변수와 문자형 변수 정의
	for (i = 0; i < strlen(str); i++)			// str문자열의 문자 길이만큼 반복 
	{
		*(target + i) = *(str + i);				// 문자열 복사
	}
	*(target + i) = '\0';						// 마지막에 NULL문자 넣어주기
	printf("str: %s\n", str);
	printf("target: %s", target);

	return 0;										
}
