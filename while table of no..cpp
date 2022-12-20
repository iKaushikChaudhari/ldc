#include <stdio.h>
int main()
{
    int i,n;
    i=1;
    printf("Enter The Number ");
    scanf("%d",&n);
    
    while(i<=10)
	{
    	printf("%5d\n",i*n);
    	i++;
	}
	printf("\nThe End");
    return 0;

}

