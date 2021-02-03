//==========================================================
//
// Title:      14-1-2
// Author:     Daehwan Yoo
// Date:       Feb-3-2020
// Description:
//   Get three values and change the order. 
// 
//==========================================================
#include <stdio.h>

void Swap(int *num1,int *num2,int*num3)
{
	int temp = *num3;
	*num3 = *num2;
	*num2 = *num1;
	*num1 = temp;
}

int main(void)
{
	int n1,n2,n3;
	printf("Please put your three digit: ");
	(void)scanf("%d %d %d", &n1, &n2, &n3);
	Swap(&n1, &n2, &n3);

	printf("The result for each value is: %d %d %d", n1, n2, n3);

	return 0;
}