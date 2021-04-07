#include<stdio.h>
void main()
{
    int i,j;
    int a=2,b=1;
    for(i=1;i<4;i++)
    {
        a+=i;
        printf("%d\t",a+b);
        for(j=7; j>=5 ;j--)
            b+=a;
        printf("\n%d\n",a);
    }
}
