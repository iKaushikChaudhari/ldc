#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;						//Assined Three Different Variables For Three Angles From Which We Will Get Two From User In Oder To Get Third One
	printf("Value Of First Angle Of Triangle:-");
	scanf("%d",&angle1);							//Input Of First Angle Of Triangle
	printf("Value Of Second Angle Triangle:-");
	scanf("%d",&angle2);							//Input Of Second Angle Of Triangle
	
	
	
	angle3 = 180 - angle1 - angle2 ;				// Sum Of All Angles Of Triangle Is 180 Degree
	
	printf("\nValue Of Third Angle Of Triangle Is %d", angle3); //printf To Print Value Of Third Angle 
	printf(" Degree");								

	return 0;
}  //Program End Here 
