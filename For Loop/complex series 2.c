//1+1/2+1/3+...
#include<stdio.h>
int main()
{
    float i,n,x=0,sum=0;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    for(i=1; i<=n; i++)
    {
        ++x;
        sum=sum + (1/x);
    }

    printf("The sum of the series: %f", sum);
    return 0;

}

