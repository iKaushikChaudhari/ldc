//Write a menu-driven program in C to demonstrate the use of the left shift, right shift, and, or, xor operators.
#include <stdio.h>
int main()
{
	int a=20;	//20 = 010100
	int b=21;	//21 = 010101
	int c=0;
	
	//Bitwise AND
	c=a&b;		//20 = 010100
	printf("AND - Value of c is %d\n",c);
	
	//Bitwise OR
	c=a|b;		//21 = 010101
	printf("OR - Value of c is %d\n",c);
	
	//Bitwise Exclusive OR
	c=a^b;		//1 = 0001
	printf("Exclusive-OR - Value of c is %d\n",c);
	
	//Shift left
	c=a<<2;		//80 = 101000
	printf("Left Shift - Value of c is %d\n",c);
	
	//Right Shift
	c=a>>2;		//05 = 000101
	printf("Right Shift - Value of c is %d\n",c);
	
	return 0;
}//Program End Here 
