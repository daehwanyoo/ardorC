#include <stdio.h>

int main(void) 
{
	int num=0, result;

	printf("Please enter your value: ");
	(void)scanf("%d", &num);

	result = ~num +1;
	printf("This is inverted sign: %d", result);


	return 0;
}