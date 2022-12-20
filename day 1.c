#include <stdio.h>
int main()
{
    int ch;
    int *p;
    int sum =0;
    int cnt= 0;
    do
    {
        p=(int*)malloc(sizeof(int));
        printf("Enter Any Number");
        scanf("%d",p);
        printf("\n\nYour Number Is %d",*p);
        sum=sum+*p;
        printf("\n Press 1 To Continue");
        scanf("%d",&ch);
        cnt++;

    }while(ch==1);
    printf("\nSum Of %d No. Is: %d",cnt,sum);
    return 0;

}

