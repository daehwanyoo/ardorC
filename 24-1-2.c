//==========================================================
//
// Title:      24-1-2
// Author:     Daehwan Yoo
// Date:       Feb-10-2021
// Description:
//   Add some data in mystory.txt file
//
//==========================================================
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("mystory", "wt");
	if (fp == NULL)
	{
		printf("Failed to open");
		return -1;
	}

	fputs("#Favorite food: Chicken \n", fp);
	fputs("#Hobby: Soccer \n", fp);
	fclose(fp);

	return 0;
}
