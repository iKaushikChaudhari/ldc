#include<stdio.h>
int main()
{
	int per;
	printf("Enter Your Percentage:");
	scanf("%d",&per);
	if(per>100)
	{
		printf("\nError!!! Percentage Can't Be Greater Than 100%");
	}
	else if(per<100 && per>=90)
	{
		printf("\nCongratulations.....You Have Scored A+ Grade!");
	}
	else if(per<90 && per>=75)
	{
		printf("\nCongratulations.....You Have Scored A Grade!");
	}
	else if(per<75 && per>=60)
	{
		printf("\nCongratulations.....You Have Scored B+ Grade!");
	}
	else if(per<50 && per>=45)
	{
		printf("\nCongratulations.....You Have Scored D Grade!");
	}
	else if(per<45 && per>=0)
	{
		printf("\nYou Have Scored C Grade!");
	}
	else if(per<0)
	{
		printf("\nError!!! Percentage Can't Be less Than 0%");
	}
	return 0;
}
