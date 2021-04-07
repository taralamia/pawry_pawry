#include<stdio.h>
int checkPrimeNumber();

int main()
{
    printf("Prime Numbers from the given range:\n ");

    checkPrimeNumber();

    return 0;
}
int checkPrimeNumber()
{
    int i,j=2,n,flag=0;

    printf("Enter the ending number: ");
    scanf("%d", &n);

    for(j=2; j<=n ; j++)
    {
        flag=0;
        for(i=2; i<=j/2 ; i++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d is a Prime number\n", j);
        }
    }
    return 0;

}

