#include<stdio.h>
int main()
{
    int i,n,flag=1;

    printf("Enter any number to check if its prime or not: ");
    scanf("%d", &n);


    for(i=2; i<n; i++)//n/2 not needed shudu i<n dileo hobe
    {
        if(n % i == 0)
           {
            flag=0;
            break;
           }
    }

    if(flag==1)
        printf("%d is Prime Number\n", n);
        else
        printf("%d is not a Prime Number\n ", n);

    return 0;
}
