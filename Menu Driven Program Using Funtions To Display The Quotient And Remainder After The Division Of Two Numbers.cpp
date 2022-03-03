//Write A Menu Driven Program In C Using Funtions To Display The Quotient And Remainder After The Division Of Two Numbers.
#include <stdio.h>
//Funtion Declaration
void quotient(int, int);
void remainder(int, int);
int main()
{
	int a,b,choice;
	printf("Enter 1 To Find Quotient \nEnter 2 To Find Remainder \nEnter your choice :  ");
    scanf("%d",&choice);
	switch (choice)
	{
		//Funtion Call
	case 1:
	{
		printf("Enter Two Number For Division: ");
		scanf("%d %d",&a,&b);
		quotient(a,b);
		break;
	}
	case 2:
	{
		printf("Enter Two Number For Division: ");
		scanf("%d %d",&a,&b);
		remainder(a,b);
		break;
	}
}
}
//Funtion Defination 
void quotient(int a, int b)
{
	int quo;
	quo = a/b;
	printf("Quotient After The Division Of Two Number Is %d.",quo);
}
void remainder(int a, int b)
{
int remain;
remain = a % b;
printf("Remainder After The Division Of Two Number Is %d.",remain);
}
