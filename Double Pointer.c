#include <stdio.h>

int main()
{
	static char* str[] = { "C language","java","Python","C++","HTM" };				
	char** s, i;
	s = str;
	for (i = 0; i < 5; i++,s++)
	{
		printf("%p:%p:%s\n", &*s, *s, *s);		// "c"의 주솟값의 주솟값 : 주솟값 : 문자열
	}

	return 0;										
}
