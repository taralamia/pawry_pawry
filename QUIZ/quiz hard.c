#include<stdio.h>
int main()
{
    int a=18, b=128;
    int x,y,z;
    x=a & b;
    printf("output of x=%d\n",x);

    y=x<<2;
    printf("output of y= %d\n",y);
    z=~(x>>1);
    printf("output of z=%d\n",z);
    return 0;
}
