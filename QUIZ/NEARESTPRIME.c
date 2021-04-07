#include<stdio.h>

int isPrime(int n);
int lowPrime(int n);
int highPrime(int n);
int main()
{
    int n,flag=0,hs,ls;

    printf("Enter a Positive Number: ");
    scanf("%d",&n);

    if(isPrime(n)==n)
    {
        printf("%d is a Prime Number: ");
    }
    else
    {
        ls=lowPrime(n);
        hs=highPrime(n);

        if((n-ls ) > (hs-n))
        {
            printf("%d is the closest prime number: ",hs);
        }
        else
        {
            printf("%d is the closest prime number: ", ls);
        }

    }
}
int isPrime(int n)
{
    int i,flag=0;

    for(i=2; i<=n/2 ; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

 if(flag==0)
    return n;
 else
    return 0;

}
int lowPrime(int n)
{
    while (n>=1)
  {

     if(isPrime(n)==n)
    {
        return n;
        break;
    }
    n--;
  }
}
int highPrime(int n)
{

    while (n>=1)
    {
        if(isPrime(n)==n)
        {
            return n;
            break;
        }
     n++;
    }


}
