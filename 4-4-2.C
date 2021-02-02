#include <stdio.h>

int main(void)
{
	int num = 3;
	int result1 = num << 3;
	int result2 = result1>>2;

	printf("Result: %d", result2);
	return 0;
}