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
	int i, j, row;
	printf("Enter The Number Of Rows:");
	scanf("%d",&row);
	for(i=row; i>=1; --i)
	{
		for(j=1; j<=i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}//Program End Here 
