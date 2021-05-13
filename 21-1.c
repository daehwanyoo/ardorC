#include <stdio.h>

int change(ch)
{
	int temp = 'a' - 'A';
	if ((ch >= 'A') && (ch <= 'Z'))
		return ch + temp;
	else if ((ch >= 'a') && (ch <= 'z'))
		return ch-temp;
	else
		return -1;
}

int main(void)
{
	int ch1, ch2;
	printf("문자 입력: ");
	ch1 = getchar();
	ch2 = fgetc(stdin);
	ch1 = change(ch1);
	if (ch1 == -1)
	{
		puts("out of range");
		return -1;
	}
	putchar(ch1);
	return 0;
}