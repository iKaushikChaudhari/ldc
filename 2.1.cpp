//Problem Statement:-Write a program in C to display the quotient and remainder after the division of two numbers
#include<stdio.h>
int main()
{
	int num1,num2,quotient,remainder;	//Declaration Of Integer Variables:- num1,num2,quotient,remainder.
	
	printf("\nEnter First No. :-");
	scanf("%d",&num1);					//%d Is A Format Specifier Which Represent The Integer Values Stored In Variable num1.
	
	printf("\nEnter Second No. :-");
	scanf("%d",&num2);					//%d Is A Format Specifier Which Represent The Integer Values Stored In Variable num2.
	
	quotient=num1/num2;					//Divide Numerator By Denumerator And Give Integer Value.
	remainder=num1%num2;				//Modulus Operator And Remainder Of After An Integer Division.
	
	printf("\nQuotient is %d",quotient);
	printf("\nRemainder is %d",remainder);	
	
	return 0;
}//Program End Here
