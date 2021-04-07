#include<stdio.h>
int getInteger();
int main()
{
   int i,n,flag=0;

   n=getInteger();

  for(i=2; i<=n/2 ; i++)
  {
    if(n%i==0)
    {
        flag=1;
        break;
    }
  }
if(flag==0)
{
    printf("%d is a Prime Number", n);
}
else
{
    printf("%d is not a Prime number", n);
}

    return 0;
}
int getInteger()
{
    int n;
    printf("Enter a Number to check if it's Prime or not: ");
    scanf("%d",&n);

    return n;
}
