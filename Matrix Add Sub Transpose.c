//Write a menu driven program in C to perform addition, subtraction, division and transpose of matrices.
#include <stdio.h>
int main()
{
	  // Declaration Of Variables 
   int m,n,a[20][20],b[20][20],i,j,sum[20][20],sub[20][20],c[20][20],tr[20][20],ch,e,f;
      printf("Note : For Addition or Subtraction, no. of rows and columns should be same and for transpose of matrices.\n");
      printf("Enter The No. Of Rows For First Matrices: ");
      scanf("%d",&m);
      printf("Enter The No. Of Columns For First Matrices: ");
      scanf("%d",&n);
      printf("Enter the Data Elements Of First Matrices\n");
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
     } printf("Enter The No. Of Rows For Second Matrices: ");
      scanf("%d",&e);
      printf("Enter The No. Of Columns For Second Matrices: ");
      scanf("%d",&f);
      printf("Enter the Data Elements Of Second Matrices\n");
     for(i=0;i<e;i++)
     {
       for(j=0;j<f;j++)
        {
          scanf("%d",&b[i][j]);
        }
     }    
        	printf("Enter 1 For Addtion  Of Matrices\n");
        	printf("Enter 2 For Subtraction Of Matrices\n");
        	printf("Enter 3 for Division Of Matrices\n");
        	printf("Enter 4 For Transpose Of First Matrices\n");
        	printf("Enter Choice To Perform Operation");
			scanf("%d",&ch);
   			switch(ch)
    {
         case 1 :
			{
				for(i=0;i<m;i++)
      				{
        				for(j=0;j<n;j++)
        				{
           				sum[i][j]=a[i][j]+b[i][j];
       					}
					}		
					printf("The Resultant Matrices Is After Addtion:\n");
     				for(i=0;i<m;i++)
     					{	
        					for(j=0;j<n;j++)
						        {
           							printf("%3d",sum[i][j]);
        						}
             					printf("\n");
      					}
     	 break;
	 		}		
         case 2 :
        	{
        		for(i=0;i<m;i++)
      			{
        			for(j=0;j<n;j++)
        			{
          				sub[i][j]=a[i][j]-b[i][j];
        			}
    			}
       			printf("The Resultant Matrices Is After Subtraction:\n");
    			for(i=0;i<m;i++)
      			{
        		for(j=0;j<n;j++)
        		{
           		printf("%3d",sub[i][j]);
        		}
       		    printf("\n");
      			}
    
      	break;
  			}
       case 3 :
       	{
            printf("The Resultant Matrices Is After Division:\n");
       		break;
   		}
       case 4 :
       	{
           for(i=0;i<m;i++)
              {
                for(j=0;j<n;j++)
                {
                   tr[j][i]=a[i][j];
                }
              }
            printf("For Matrices There Is No Such Thing As Division.\n");
             for(i=0;i<n;i++)
              {
                 for(j=0;j<m;j++)
               		{
                    	printf("%3d",tr[i][j]);
               		}
                    printf("\n");
              }
      			break;  
		}
	  }
return 0;
}//Program End Here
