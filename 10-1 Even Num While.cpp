#include <stdio.h>
int main()
{
    int i,n;
    printf("10-1 Even Numbers Are: ");
	i=10;
    while(i>0)
	{
	    if(i%2==0)
	    {
	        printf("%5d",i);
	    }
    	
    	i--;
	}
	printf("\nThe End");
    return 0;

}
