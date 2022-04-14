//Write A Menu Driven Program In C Using Funtions 
#include <stdio.h>
#include <math.h>
void squareroot(int);
void logx(double);

int main()
{
	int a,choice;
	double b;
	printf("Enter 1 For Square Root \nEnter 2 For Substration \nEnter 3 For Multiplaction \nEnter 4 For Division \nEnter your choice :  ");
    scanf("%d",&choice);
	switch (choice)
	{
	
	case 1:
	{
		printf("Enter Number To Find Square Root:");
		scanf("%d",&a);
		squareroot(a);
		break;
	}
	case 2:
	{
		printf("Enter Two Number For substraction: ");
		scanf("%lf",&b);
		log(b);
		break;
	}

	default:
		printf("Enter Correct Choice");
	
	}
}
void squareroot(int a)
{
	int sq;
	sq = sqrt(a);
	printf("Square Root Of %d Is %d.",a,sq);
}
void logx(double b)
{
	double  lo;
	lo = log(b);
	printf("Log Of %lf Is %lf.",b,lo);
}

