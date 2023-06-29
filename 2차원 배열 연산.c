#include <stdio.h>
int main()
{
	int str1[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int str2[3][3] = { 1,2,3,4,5,6,7,8,9 };

	int str3[3][3];

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			str3[i][j] = str1[i][j] + str2[i][j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d ", str3[i][j]);
			
		}
		printf("\n");
	}

	return 0;
}
