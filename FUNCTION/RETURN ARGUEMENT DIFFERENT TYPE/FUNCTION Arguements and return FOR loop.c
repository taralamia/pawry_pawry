#include<stdio.h>
int checkPrimeNumber(int n);
int main()
{
  int n,flag;

    printf("Enter a Positive Number: ");
    scanf("%d", &n);

    flag=checkPrimeNumber(n);

  if(flag==0)
  {
      printf("%d is a Prime Number",n);
  }
else
{
    printf("%d is not a Prime Number",n);
}

    return 0;
}
int checkPrimeNumber(int n)
{
    int i;

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return 1;
            break;
        }
    }
    return 0;

}
