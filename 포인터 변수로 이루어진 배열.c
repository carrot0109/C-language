#include <stdio.h>
int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1,&num2,&num3 };   //변수들의 주소를 배열로 구성

	printf("%d\n", *arr[0]);        //arr이라는 포인터 배열의 값들을 꺼내기 위해 참조연산자 사용
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);

	return 0;
}


#include <stdio.h>
int main()
{
	char* strarr[3] = { "simple","string","array" };    
	printf("%s\n", strarr[0]);         //strarr이라는 포인터 배열은 simple이라는 char형 포인터 배열 자료를 저장해놓은 배열이다. 이를 출력할 때에는 strarr[0] 자체가 배열을 가리키므로 참조연산자가 필요없다.
	printf("%s\n", strarr[1]);
	printf("%s\n", strarr[2]);

	return 0;
}
