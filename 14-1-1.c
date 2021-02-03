//==========================================================
//
// Title:      14-1-1
// Author:     Daehwan Yoo
// Date:       Feb-3-2020
// Description:
//   Make two functions that make the square of input. 
// Utilize Call-by-value and Call-by-reference
//==========================================================
#include <stdio.h>

int SquareByValue(int num)
{
	return num*num;
}

int SquareByReference(int* num)
{
	*num=*num**num;
	return *num;
}

int main(void) 
{
	int n;
	printf("Please put your input: ");
	(void)scanf("%d", &n);

	printf("The result for Value: %d \n", SquareByValue(n));
	
	printf("The result for reference: %d\n", SquareByReference(&n));
	
	printf("The final value of number is: %d\n\n", n);

	return 0;
}