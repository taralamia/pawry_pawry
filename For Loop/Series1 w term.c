#include<stdio.h>
int main()
/*
{
    int i, sum = 0, term = 5;

    for(i=1; i<=75; i++)
    {
        sum = sum + term;
        term = term + 6;
    }
    printf("Sum is=%d", sum);
    return 0;
}*/
{
    int i, n=12;


    for(i=1; i<=n; i++)

    {
        if(n % i == 0)
        printf("%d\t", i);
    }


    return 0;
}
