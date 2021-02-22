#include<stdio.h>
int main()
{
    double i,res=1,n;

    printf("Enter the value of n=", n);
    scanf("%lf", &n);

    for(i=1; i<=n; i++)
    {
        res = res * i;
    }

    printf("result=%lf",res);
   return 0;

}
