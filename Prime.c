#include <stdio.h>

int main() {
   int low, high, i, flag;
   printf("Enter Your First Number And Last Number: ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);

   // Iteration Until Lower Number Is Not Equal To High
   while (low < high) 
   {
      flag = 0;

      // Ignoring Numbers Less Than 2
      if (low <= 1) 
	  {
         low++;
         continue;
      }

      // If Flag Is == 1 --> i Is Prime 
      for (i = 2; i <= low / 2; i++) 
	  {

         if (low % i == 0) 
		 {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      // To Check Prime For The Next Number
      // Increasing Lower Number By 1
      low++;
   }

   return 0;
}//Program End Here
