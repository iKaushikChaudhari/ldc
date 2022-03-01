//Write a program in C using functions to display addition, subtraction, multiplication, division of two numbers
#include <stdio.h>
void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);
int main()
{
	int a,b,choice;
	printf("Enter your choice :  ");
    scanf("%d",&choice);
	switch (choice) 
	{
	case 1:
	{
		printf("Enter Two Number: ");
		scanf("%d %d",&a,&b);
		addition(a,b);
		break;
	}
	case 2:
	{
		printf("Enter Two Number: ");
		scanf("%d %d",&a,&b);
		subtraction(a,b);
		break;
	}
	case 3:
	{
		printf("Enter Two Number: ");
		scanf("%d %d",&a,&b);
		multiplication(a,b);
		break;
	}
	case 4:
	{
		printf("Enter Two Number: ");
		scanf("%d %d",&a,&b);
		division(a,b);
		break;
	}
	}
}
void addition(int a, int b)
{
	int add;
	add = a+b;
	printf("Addition Of %d And %d Is Equal To %d.",a,b,add);
}
void subtraction(int a, int b)
{
	int sub;
	sub = a-b;
	printf("Subtraction Of %d And %d Is Equal To %d.",a,b,sub);
}
void multiplication(int a, int b)
{
	int mul;
	mul = a*b;
	printf("Multiplication Of %d And %d Is Equal To %d.",a,b,mul);
}
void division(int a, int b)
{
	int div;
	div = a/b;
	printf("Division Of %d And %d Is Equal To %d.",a,b,div);
}

