#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

enum day{sun,mon,tue,wed,thu,fri,sat};
typedef enum day day;
char* day_name[] = { "일","월","화","수","목","금","토" };

day tomorrow(day d)
{
	return((day)(((int)d + 1) % 7));
}

day yesterday(day d)
{
	return((day)(((int)d + 6) % 7));
}

int main()
{
	day today = sun;
	printf("어제는 %s요일\n", day_name[yesterday(today)]);
	printf("오늘은 %s요일\n", day_name[today]);
	printf("내일은 %s요일\n", day_name[tomorrow(today)]);

	return 0;
}
