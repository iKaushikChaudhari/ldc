/*
Output:
Enter The Number Of Rows:4
*
**
***
****
****
***
**
*
*/
#include<stdio.h>
int main()
	{
	int n, i , j;
	printf("Enter The Number Of Rows:");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
		{
		for(j = 1; j <= i; j++)
			{
			printf("*");
			}
		printf("\n");
		}
	for(i = n; i >= 1; i--)
		{
		for(j = 1; j <= i; j++)
			{
			printf( "*");
			}
	// ending line after each row
	printf("\n");
		}
	return 0;
	}//Program End Here
