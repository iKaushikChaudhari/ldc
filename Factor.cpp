#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter The Number ");
    scanf("%d",&n);
	i=2;
    while(i<=n/2)
	{
	    if(n%i==0)
	    {
	        printf("%5d",i);
	    }
    	
    	i++;
	}
	printf("\nThe End");
    return 0;

}
