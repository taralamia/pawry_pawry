//1+2^2/2!+3^2/3!+....
#include<stdio.h>
int main()
{
    int n , i, j, fact = 1;
    float sum = 0;

    printf("Input the value of n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        fact = 1;
        for (j = 1; j<=i; j++)
        {
            fact*=j;
        }
        sum += ((i*i)/(1.0*fact));
    }
    printf("\n%.2f\n", sum);
    return 0;
}
