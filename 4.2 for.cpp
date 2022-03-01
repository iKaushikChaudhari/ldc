//Write a program in C to display first N number in reverse order on the screen using while loop
#include<stdio.h>
int main()
{
	int counter,num,init;
	printf("Enter Number Of Time You Want To Execute The For Loop: ");
	scanf("%d",&num);
	printf("Enter The Initial Value: ");
	scanf("%d",&init);
	counter = init;
	while(counter>init-num)
	{
		printf("Number Is %d\n",counter);
		counter--;
	}
	return 0;
}

