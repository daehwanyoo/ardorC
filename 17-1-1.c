//==========================================================
//
// Title:      17-1-1
// Author:     Daehwan Yoo
// Date:       Feb-4-2020
// Description:
//   Build MaxAndMin function 
// 
//==========================================================
#include <stdio.h>

void MaxAndMin(int* arr, int size, int** mx, int** mn)
{
	int* max, * min;
	int i;
	
	max = min = &arr[0];
	for (int i = 0; i < size; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*mx = max;
	*mn = min;
}

int main(void) 
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	for (int i = 0; i < 5; i++)
	{
		printf("Input your [%d] number: ", i + 1);
		(void)scanf("%d", &arr[i]);
	}
	
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("Maximum: %d, minimum: %d \n", *maxPtr, *minPtr);

	return 0;
}