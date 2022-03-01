// Write a program in C to display the Fibonacci series within a given range
#include <stdio.h>
int main() 
{
  int t1 = 0, t2 = 1, t3 = 0, n; //t3 --> Is Next Term Form By Addition Of First Two Term
  printf("Enter The Range FOr Fibonacci Series: ");
  scanf("%d", &n);

  // Displays The First Two Terms Which is 0 And 1 Always 
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  t3 = t1 + t2;

  while (t3 <= n) 
  {
    printf("%d, ", t3);
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }

  return 0;
}//Program End Here
