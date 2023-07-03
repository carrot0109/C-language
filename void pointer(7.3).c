#include <stdio.h>
#include <stdlib.h>

void SoSimpleFunc(void)
{
	printf("I'm so simple");
}

int main()
{
	int num = 20;
	void* ptr;                     // void형 포인터 변수에는 어떠한 변수의 주소 값이든 담을 수 있음

	ptr = &num;
	printf("%p\n" , ptr);
	
	int* ptr3 = ptr;               // 하지만 ptr을 그대로 사용하여 20이라는 저장된 값을 꺼낼 수는 없으므로 형변환을 해주어야 함        
	printf("%d\n", *ptr3);


	ptr = SoSimpleFunc;
	printf("%p\n", ptr);

	void (*ptr2)(void) = ptr;
	ptr2();

	return 0;
}
