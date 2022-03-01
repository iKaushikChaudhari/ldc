//Write a program in C to display the addition of N numbers stored in an array
/*Input:
How Many Numbers Addition Would You Like To Preform:5
Enter 5 Array Elements For Addition: 5 8 9 10 15

Output:
Addition Of 5 Array Elements Is:47
*/
#include <stdio.h>
int main()
{ 
	int i,range,sum;//Initializing Variables
	int num[100];
	
	printf("How Many Numbers Addition Would You Like To Preform:");
	scanf("%d",&range);		//Input size of the array
	printf("Enter %d Array Elements For Addition:",range);		//Input array element
	for(i=0; i<range; i++)
	{
		scanf("%d",&num[i]);
	}
	sum=0;
	for(i=0; i<range; i++)			//Add each array element to sum
	{
		sum = sum+num[i];			
	}
	printf("\nAddition Of %d Array Elements Is:%d",range,sum);
	return 0;
}//Program End Here
