#include<stdio.h>
int main()
{
    int i,n,j,m;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        for(j=0;j<=i;j++)
         {
            m=i+j;

        if(m%2==0)
         {
           printf("1");

         }
        else
        {
            printf("0");
        }
    }
      printf("\n");

    }



    return 0;

}
