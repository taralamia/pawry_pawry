#include<stdio.h>
int checkPrimenum();
int main()
{

    checkPrimenum();
    return 0;
}
int checkPrimenum()
{
    int i,n,flag=0;

    printf("Enter any Number to check if it's Prime number or not: ");
    scanf("%d", &n);

    while(i<=n/2)
    {
        i=2;
        if(n%i==0)
        {
            flag=1;
            break;
        }
      i++;
    }

if(flag==0)
{
    printf("%d is a Prime Number",n);
}
else
{
    printf("%d is not a Prime Number",n);
}


}
