#include <stdio.h>

int main()
{
   int x1,v1,x2,v2,i;
   printf ("Input x1 v1 x2 v2 (pisahkan dengan space) : ");
   scanf ("%d %d %d %d",&x1,&v1,&x2,&v2);

   if (x1<0)
   printf ("\nError!!! Minimal nilai X1 adalah 0");
    else if (x2<=x1)
    printf ("\nError!!! X2 harus lebih besar dari X1");
     else if (x2>1000)
     printf ("\nError!!! Maksimal nilai X2 adalah 1000");
      else if (v1<1)
      printf ("\nError!!! Minimal nilai V1 adalah 1");
        else if (v1>1000)
        printf ("\nError!!! Maksimal nilai V1 adalah 1000");
         else if (v2<1)
         printf ("\nError!!! Minimal nilai V2 adalah 1");
          else if (v2>1000)
          printf ("\nError!!! Maksimal nilai V2 adalah 1000");
            else
            {
                for (i=1;i<=1000;i++)
                {
                    x1+=v1;
                    x2+=v2;
                    if (x1==x2)
                    {
                        printf ("\nYES");
                        break;
                    }
                }
                if (x1!=x2)
                    printf ("\nNO");
            }      
    
    return 0;
}