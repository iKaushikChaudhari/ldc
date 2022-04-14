/*

Name:- Kaushik Santosh Chaudhari
Roll No.:- 845
Batch:- H2
Problem Statement:- Write a menu-driven program in C to display addition, subtraction, multiplication, division of two numbers

*/

#include<stdio.h>
int main()
{
	int number1,number2,add,sub,div,mul;   	//6 Veriables To Store Integer, 2 For Input From User And Other 4 For Output 
	
	printf("Enter First Number:-");
	scanf("%d",&number1);					//Input For First Number 
											//scanf Takes Input From User 
											//%d Is Format Specifier For Integer Values 
	printf("Enter Second Number:-");
	scanf("%d",&number2);					//Input For Second Number	
	
	add = number1 + number2;				//Addition Of Both Numbers 
	printf("\nAddition is %d", add);
	
	sub = number1 - number2;				//Substraction Of Both Numbers
	printf("\nSubstraction is %d", sub);
	
	div = number1 / number2;				//Division Of Both Numbers
	printf("\nDivision is %d", div);
	
	mul = number1 * number2;				//Multiplication Of Both Numbers
	printf("\nMultiplication is %d", mul);
	
	return 0;
}											//Program End Here
