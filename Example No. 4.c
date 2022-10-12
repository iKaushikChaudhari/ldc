#include<stdio.h>
int main()
{
	int height,width,perimeter;
	printf("Height Of Rectangle:-");
	scanf("%d",&height);
	printf("Width Of Rectangle:-");
	scanf("%d",&width);
	
	
	
	perimeter = 2 * ( height + width );
	
	printf("\nPerimeter Of Rectangle Is %d", perimeter);
	printf(" Units");

	return 0;
}
