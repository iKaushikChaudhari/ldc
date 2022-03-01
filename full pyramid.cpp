/*
Output:
Enter The Number Of Rows:4
   *
  ***
 *****
*******
*/
#include <stdio.h>
int main(){
	int i, space, row, k=0;
	printf("Enter The Number Of Rows:");
	scanf("%d", &row);
	for (i=1; i<=row; ++i, k=0)
	{
		for (space=1; space<=row-i; ++space)
		{
			printf(" ");
		}
		while (k != 2*i - 1)
		{
			printf("*");
			++k;
		}
		printf("\n");
	}
	return 0;
}//Program End Here
