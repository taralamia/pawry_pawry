//1/1!+2/2!+3/3!+..
#include<stdio.h>
int main()
{

    float i,n,fac=1,sum=0;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    for(i=1; i<=n ; i++)
    {
        fac=fac*i;
        //++x;
        sum=sum +(i/fac);
    }
    printf("sum is %f", sum);

    return 0;
}
