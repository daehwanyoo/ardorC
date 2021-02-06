//==========================================================
//
// Title:      Challenge 3-1
// Author:     Daehwan Yoo
// Date:       Feb-6-2021
// Description:
//   Set 4*4 array, and make them rotate
//
//==========================================================
#include <stdio.h>
void rotate(int a[4][4])
{

    for (int i = 0; i < 2; i++) {
        for (int j = i; j < 3 - i ; j++) {


            int temp = a[i][j];
            a[i][j] = a[3 - j][i];
            a[3 - j][i] = a[3 - i][3 - j];
            a[3 - i][3 - j] = a[j][3 - i];
            a[j][3 - i] = temp;
        }
    }
}
void displayMatrix(int mat[4][4])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			printf("%2d ", mat[i][j]);

		printf("\n");
	}
	printf("\n");
}
int main(void)
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	rotate(arr);
	displayMatrix(arr);

	return 0;
}