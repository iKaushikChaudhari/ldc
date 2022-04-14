/*
Output:
Enter The Number Of Rows:4

   *
  * *
 * * *
* * * *
 * * *
  * *
   *
   
*/
#include<stdio.h>
int main()
{
	int n, s, i, j;
	printf("Enter The Number Of Rows:");
	scanf("%d",&n);
	for(i = 0; i <= n; i++)
		{
		for(s = n; s > i; s--)
			printf(" ");
		for(j=0; j<i; j++)
			printf("* ");
			printf("\n");
		}	
	for(i = 1; i < n; i++)
	{	
	for(s = 0; s < i; s++)
		printf(" ");
	for(j = n; j > i; j--)
		printf("* ");
	// ending line after each row
	printf("\n");
	}
	return 0;
}//Program End Here
