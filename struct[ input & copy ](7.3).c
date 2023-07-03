#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
	char Name[20];
	char PhoneNum[20];
	int age;
};

int main()
{
	struct person man, woman;
	strcpy(man.Name, "안성준");                // 복제 기능
	strcpy(man.PhoneNum, "010-1234-5678");
	man.age = 23;

	printf("이름 입력: ");scanf("%s", woman.Name);   
  // 문자열을 입력받을 때 scanf_s를 사용할 경우에는 문자열 크기도 같이 입력해주어야 함 
  // 예: printf("이름 입력: ");scanf_s("%s", woman.Name, sizeof(woman.Name));
  
  printf("번호 입력: ");scanf("%s", woman.PhoneNum);
	printf("나이 입력: ");scanf("%d", &(woman.age));

	printf("이름: %s \n", man.Name);
	printf("번호: %s \n", man.PhoneNum);
	printf("나이: %d \n", man.age);

	printf("이름: %s \n", woman.Name);
	printf("번호: %s \n", woman.PhoneNum);
	printf("나이: %d \n", woman.age);


	return 0;
}
