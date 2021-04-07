#include<stdio.h>
int check_PrimeAndDisplaynum(int n);

int main()
{

    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    check_PrimeAndDisplaynum(n);

    return 0;
}
int check_PrimeAndDisplaynum(int n)
{
    int i=2,flag=0;

    while(i<=n/2)
    {
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
