#include<stdio.h>
int main()
{
 char str[20];
    int i;
    printf("\n\nEnter The String: ");
    scanf("%s",str);
    int len=0;
    while(str[len]!='\0')// Calculating length of input string
    {
        len++;
    }
    for (i=0;i<len;i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
         str[i] = str[i] + 32;
        }    
        else if (str[i] >= 97 && str[i] <= 122)
        {
         str[i] = str[i] - 32;
        }    
    }
    printf("\nConverted String(Lower/Upper) Is: %s\n",str);
    return 0;
}
