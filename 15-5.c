//==========================================================
//
// Title:      15-1
// Author:     Daehwan Yoo
// Date:       Feb-3-2020
// Description:
//   Bubble sort, descending order
// 
//==========================================================
#include <stdio.h>

void Bubblesort(int arr[], int len)
{
	int i, j;
	int temp;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < (len-i)-1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
}

int main(void)
{
	int a[7];
	for (int i = 0; i < 7; i++)
	{
		printf("Input: ");
		(void)scanf("%d", &a[i]);
	}
	Bubblesort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < 7; i++)
	{
		printf("%d", a[i]);
	}

	printf("\n");

	return 0;
}