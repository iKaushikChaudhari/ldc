#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter The Number ");
    scanf("%d",&n);
	sum=1;
    while(n>1)
	{
	    sum=sum*n;
    	n--;
	}
	printf("%d \nThe End",sum);
    return 0;
}
