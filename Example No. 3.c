#include<stdio.h>
int main()
{
	int number1,number2,add,sub,div,mul;

	printf("Enter First Number:-");
	scanf("%d",&number1);
	printf("Enter Second Number:-");
	scanf("%d",&number2);
		
	add = number1 + number2;
	printf("\nAnswer Of Arithmetic Operations are:-\n=>Addition is %d", add);
	
	sub = number1 - number2;
	printf("\n=>Substraction is %d", sub);
	
	div = number1 / number2;
	printf("\n=>Division is %d", div);
	
	mul = number1 * number2;
	printf("\n=>Multiplication is %d", mul);
	
	return 0;
}    //Program End Here 
