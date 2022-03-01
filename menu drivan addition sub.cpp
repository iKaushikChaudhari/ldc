//Write a menu-driven program in C to demonstrate the use of mathematical functions supported by math.h library
#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,choice;
	printf("Enter Two Numbers:");
	scanf("%d%d",&num1,&num2);
	printf("Press 1 For Addition\n");
	printf("Press 2 For Substraction\n");
	printf("Press 3 For Multiplication\n");
	printf("Press 4 For Division\n");
	printf("Enter Your Choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition Of Two Number Is: %d\n",num1+num2);
			break;
		
		case 2:
			printf("Substraction Of Two Number Is: %d\n",num1-num2);
			break;
		
		case 3:
			printf("Multiplication Of Two Number Is: %d\n",num1*num2);
			break;
			
		case 4:
			printf("Division Of Two Number Is: %d\n",num1/num2);
			break;
		
		default:
			printf("Please Enter Correct Number :|");
	}

	return 0;
	
}
