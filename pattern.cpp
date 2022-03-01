/*
Output:
Enter The Number Of Rows:4
*
* *
* * *
* * * *
*/
#include <stdio.h>
int main()
{
	int row, star, n;
	printf("Enter The Number Of Rows:");
	scanf("%d",&row);
	
		for(star=1; star<=row; ++star)
		{
		for(n=1; n<=star; ++n)
			{
			printf("* ");
			}
		printf("\n");
		}

	return 0;
}//Program End Here
