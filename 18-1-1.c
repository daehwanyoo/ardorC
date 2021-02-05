//==========================================================
//
// Title:      18-1-1
// Author:     Daehwan Yoo
// Date:       Feb-4-2020
// Description:
//   Guess the same pointer 
// 
//==========================================================
#include <stdio.h>
 
int main(void)
{
	int* arr1[5];
	int* arr2[3][5];

	int** a1 = arr1;
	int*(*a2)
		[5] = arr2;

	return 0;
}