#include<stdio.h>
int main()
{
    int a=12,b=23,*a1,*b1;


    a1=&a;
    b1=&b;
    *a1=5;
    printf("%d\t%d",a,b);

  return 0;
}
