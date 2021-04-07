// 1- x2/2! + x4/4! - x6/6! + .......xn/n!
#include<stdio.h>
#include<math.h>
int fac(int r);
int isPower(int p, int q);
int main()
{
   int n,k,sign=1;
   float x,sum=1;

   printf("Enter the value of x and n: ");
   scanf("%f%d",&x , &n);

    for(k=2; k<=n ; k+=2)
    {
      sign*=-1;
      sum+=sign*(isPower(x,n))/fac(k);

    }

    printf("Sum=%.2f",sum);

}
int fac(int r)
{
   int f=1;
    for(int j=1; j<=r ; j++)
    {
        f*=j;
    }
    return f;
}
int isPower(int p, int q)
{
   int res=1;

    for(int i=1; i<=q; i++)
    {
        res*=p;
    }
    return res;
}
