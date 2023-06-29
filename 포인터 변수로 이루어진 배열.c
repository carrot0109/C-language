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
	printf("%s\n", strarr[0]);         
	/*str[5]="HAPPY" 를 정의했을 때 prinf("%s",str)를 통해 HAPPY를 출력한 것과 같이 
 	문자열을 출력할 때에는 첫 번째 문자의 주솟값을 알기만 하면 출력이 가능하다. 따라서 strarr[0]이라는 것이 simple 중
	's'의 주소값을 가리키므로 참조연산자가 필요하지 않다. 따라서 숫자와 다르게 참조연산자 없이 그대로 출력할 수 있는 것이다.*/

	
	printf("%s\n", strarr[1]);
	printf("%s\n", strarr[2]);

	return 0;
}
