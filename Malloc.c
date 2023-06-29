#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nrows = 5;
	int ncols = 10;
	int row;
	int** rowptr; 
	rowptr = malloc(nrows * sizeof(int*));                            // malloc을 이용한 동적할당, rowptr은 더블 포인터 이므로 int* 사용
	if (rowptr == NULL)                                               // 동적할당에 실패했을 때 프로그램 종료
	{
		puts("\n행 포인터 공간 확보에 실패했음.\n");
		exit(0);
	}

	printf("\n\n\nIndex pointer(hex) Pointer(dec) Diff.(dec)");
	for (row = 0; row < nrows; row++)
	{
		rowptr[row] = malloc(ncols * sizeof(int));
		if (rowptr[row] == NULL)
		{
			printf("\n행 %d에 대한 공간확보 실패\n", row);
			exit(0);
		}
		printf("\n%d %p %d", row, rowptr[row], rowptr[row]);
		if (row > 0)
		{
			printf("%d",(int)(rowptr[row]-rowptr[row-1]));
		}
	}
	free(rowptr);

	return 0;										
}
