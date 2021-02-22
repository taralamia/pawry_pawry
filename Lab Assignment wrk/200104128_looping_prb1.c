#include<stdio.h>
int main()
{
    int i,res=1,res1=1,res2=1,x,n,r,res3=1;
    float res4,res5;
    printf("Enter the values of x and n: ");
    scanf("%d%d",&x,&n);
    printf("Enter the value of r [must be less than n]: ");
    scanf("%d",&r);
    for(i=1;i<=n;i++)
    {
        res=res*x;
    }
    for(i=1;i<=n;i++)
    {
        res1=res1*i;
    }
    for(i=1;i<=r;i++)
    {
        res3=res3*i;
    }
    for(i=1;i<=(n-r);i++)
    {
        res2=res2*i;
    }

    res4=(float)res1/(float)res2;
    res5=(float)res1/(float)(res3*res2);
    printf("x^n=%d\n n!=%d\n nCr=%.2f\n nPr=%.2f",res,res1,res5,res4);
return 0;
}
