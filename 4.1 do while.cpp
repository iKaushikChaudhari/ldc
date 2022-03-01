//Write a program in C to display First N numbers on the screen using do while loop
#include<stdio.h>
int main()
{
	int counter,num,init;
	printf("Enter Number Of Time You Want To Execute The For Loop: ");
	scanf("%d",&num);
	printf("\nEnter The Initial Value: ");
	scanf("%d",&init);
	counter = init;
	do
	{
		printf("/nNumber Is %d",counter);
		counter++;
	}
	while(counter<num+init);
}

