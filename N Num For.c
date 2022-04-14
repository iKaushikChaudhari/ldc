//Write a program in C to display First N numbers on the screen using for loop
#include<stdio.h>
int main()
{
	int counter,n,initial;
	printf("Enter number of time you want to execute the for loop: ");
	scanf("%d",&n);
	printf("Enter the initial value: ");
	scanf("%d",&initial);
	
	for(counter=initial; counter<n+initial; counter++)
	{
		printf("Number is %d\n",counter);
	}
	return 0;
}
