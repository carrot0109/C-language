#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

enum day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
typedef enum day wday;

int main()
{
	wday cnt;    // cnt라는 변수가 enum을 참조하니까...
	char* d_name[] = { "일","월","화","수","목","금","토" };
	for (cnt = sunday;cnt < saturday+1;cnt++) {
		printf("%s요일\n", d_name[cnt]);
	}

	return 0;
}
