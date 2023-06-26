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
	/*strarr이라는 포인터 배열은 simple이라는 char형 포인터 배열 자료를 저장해놓은 배열이다. 
	simple 이라고 표시는 되어있지만 포인터 자료이기 때문에 문자열의 첫번째 주소만을 가진다. 
        따라서 srtarr[0]은 simple의 주소값을 가리키므로 따로 참조연산자가 필요하지 않다는 의미다.*/

	
	printf("%s\n", strarr[1]);
	printf("%s\n", strarr[2]);

	return 0;
}
