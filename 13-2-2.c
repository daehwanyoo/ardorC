//==========================================================
//
// Title:      13-2-2
// Author:     Daehwan Yoo
// Date:       Feb/3/2021
// Description:
//   Same as 13-2-1, but don't change the origin value of ptr, 
// 
//==========================================================
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("The value of arr[%d] is %d \n", i + 1, *(ptr + i));
	}


	return 0;
}