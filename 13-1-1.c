//==========================================================
//
// Title:      Pointer and array
// Author:     Daehwan Yoo
// Date:       Feb/3/2021
// Description:
//   Declare int arr that has length of 5, add 2 each member
// by using/approaching pointer ptr.
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