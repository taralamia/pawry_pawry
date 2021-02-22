#include<stdio.h>                 //5-11+17
int main()
{
    int i,n,sum = 0, sign =1,term=5;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)

    {
        sum = sum + term * sign;
        term=term + 6;
        sign = sign*(-1);
    }
    printf("Sum=%d", sum);
return 0;

}
