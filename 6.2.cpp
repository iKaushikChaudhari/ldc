//Write a program in C to display the minimum and maximum element in an array
/*Input:
How Many Elements You Want To Compare:5
Enter 5 Array Elements For Finding Maximum And Minimum: 10, 50, 12, 16, 2

Output:
Maximum = 50
Minimum = 2
*/
#include <stdio.h>
int main()
{ 
	int i,range,max,min;//Initializing Variables
	int num[100];
	
	printf("How Many Elements You Want To Compare:");
	scanf("%d",&range);			//Input size of the array
	printf("Enter %d Array Elements For Finding Maximum And Minimum:",range); //Input array element
	for(i=0; i<range; i++)
	{
		scanf("%d",&num[i]);
	}
	//Assume first element as maximum and minimum
	min=num[0];
	max=num[0];
	//Find maximum and minimum in all array elements
	for(i=0; i<range; i++)
	{
		if(num[i]<min)			//If current element is smaller than min
		{
			min=num[i];
		}
		if(num[i]>max)			//If current element is greater than max
		{
			max=num[i];
		}
	}
	printf("\nMaximum: %d \nMinimum:%d",max,min);		//Print maximum and minimum element
	return 0;
}//Program End Here
