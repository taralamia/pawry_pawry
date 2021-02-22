#include<stdio.h>
int main()
{
     int i,n,sum_even=0, sum_odd=0;

    printf("Enter a number: ");

    scanf("%d", &n);

    for(i=1; i<=n ; i++)
    {
        if(i % 2==0)

        {
          sum_even += i;
        }

     else
     {
         sum_odd += i;
     }

    }
   printf("Sum_Even=%d\nSum_Odd=%d", sum_even, sum_odd);

   return 0;
}
