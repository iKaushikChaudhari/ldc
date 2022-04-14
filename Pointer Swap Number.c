//Write a program in C using function and pointers to swap two numbers.




#include <stdio.h>
//Function Declaration
void swap(int*,int*);
int main()//Main Funtion
  {
  int n1,n2;//Dclaring Variable
 
  printf("**********Program To Swap Two Number************\n\n\n\n");//adding some extra space between trwo statements
  printf("Enter Two Numbers = \n");
  scanf("%d %d",&n1,&n2);
  printf("Before Swaping = ");
  printf("\nFirst Number Is %d",n1);
  printf("\nSecond Number Is %d\n\n",n2);
  swap(&n1,&n2);
  //Funtion Call
  return 0;
  //Program Ended Here
  }
//Funtion Defination
  void swap(int* ptr1,int* ptr2)
  {
  int temp;// Temporary variable To Store Value Of First Number
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
  printf("\nAfter Swaping = \n");
  printf("First Number Is %d\n",*ptr1);
  printf("Second Number Is %d",*ptr2);
  }
