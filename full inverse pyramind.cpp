/*
Output:
Enter The Number Of Rows:4
* * * *
 * * *
  * *
   *
*/
#include <stdio.h>
int main()
{
	int row, i, j, space;
	printf("Enter The Number Of Rows:");
	scanf("%d",&row);
	for(i=row; i>=1; --i)
	{
		for(space=0; space<row-i; ++space)
		{
			printf(" ");
		}
		for (j=i;j<=2*i-1;++j)
		printf("* ");
		printf("\n");
	}
	return 0;
}//Program End Here
