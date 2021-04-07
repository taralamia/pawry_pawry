//1 + x2/2! + x4/4! + x6/6! + …….xn/n!
#include<stdio.h>
#include<math.h>
int fac(int p);
int power(int m, int q);
int main()
{
    int n,k;
    float x,sum=1;

    printf("Enter the value of x and n: ");
    scanf("%f%d",&x,&n);

    for(k=2; k<=n ; k+=2)
    {
        sum+=(power(x,k))/fac(k);
    }
    printf("sum=%.2f",sum);

return 0;
}
int fac(int p)
{
    int f=1;

    for(int j=1; j<=p ;j++)
    {
        f*=j;
    }
    return f;
}
int power(int m,int q)
{
   int res=1;
    for(int i=1; i<=q; i++)

    {
        res*=m;
    }
    return res;
}
