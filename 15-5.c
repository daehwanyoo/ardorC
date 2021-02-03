//==========================================================
//
// Title:      16-1-3
// Author:     Daehwan Yoo
// Date:       Feb-3-2020
// Description:
//   Grading management program using dimensional array.
// 
//==========================================================
#include <stdio.h>

void WriteRecord(void)
{
	int sum;
	int i, j;
	for (int i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d student's grade \n", i + 1);
		for (int j = 0; j < 4; j++)
		{
			printf("Subject %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}
int main(void)
{
	int record[5][5];
	int result=0, totalresult=0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Input for arr[ %d ][ %d ]: ", i+1,j+1);
			(void)scanf("%d", &arr[i][j]);
			arr[i][4] += arr[i][j];
		}
		result += arr[i][4];

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Show the saved data, arr[%d][%d]: %d \n", i+1,j+1, arr[i][j]);
		}
	}
	printf("Therefore, the total result is: %d", result);

	return 0;
}