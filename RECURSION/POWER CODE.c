#include<stdio.h>
int power(int base, int n);
int main()
{
    int base,n;

    printf("Enter the base and power number: ");
    scanf("%d%d",&base, &n);

    printf("%d^%d=%d",base,n,power(base,n));

    return 0;
}
int power(int base, int n)
{
    if(n==0)
        return 1;
    else
        return (base* power(base,n-1));
}
