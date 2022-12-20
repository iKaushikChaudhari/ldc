#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter The Number ");
    scanf("%d",&n);
	i=10;
    while(i>0)
	{
    	printf("%d * %d =/n%5d",n,i,n*i);
    	i--;
	}
	printf("\nThe End");
    return 0;

}
