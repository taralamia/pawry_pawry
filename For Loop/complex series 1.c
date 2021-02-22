#include<stdio.h>
int main()
{
    float i,n,x,fact=1;
    float sum=0;                                    //1+2(square)/2!+3(square)/3!+...

    printf("Enter the value of n: ");
    scanf("%f", &n);

    for(i=1; i<=n; i++)
    {
        fact=fact * i;
        x= i * i;
        sum=sum+(x/fact);
    }

    printf("%.2f\n",sum);

    return 0;
}
