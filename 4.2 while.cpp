//Write a program in C to display first N number in reverse order on the screen using do while loop
#include<stdio.h>
int main()
{
	int counter,num,init;
	printf("Enter Number Of Time You Want To Execute The For Loop: ");
	scanf("%d",&num);
	printf("Enter The Initial Value: ");
	scanf("%d",&init);
	counter = init;
	do
	{
		printf("Number Is %d\n",counter);
		counter--;
	}
	while(counter>init-num);

}

