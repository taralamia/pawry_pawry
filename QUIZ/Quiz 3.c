#include<stdio.h>
int main()
{
    int *p,*q,i,t;

  int a[10]={1,2,3,4,5,6,7,8,9,0};

    p=&a[0];
    q=&a[9];
    for(i=0;i<=5;i++)
  {
      *p=*p+*q;
      *q=*p-*q;
      *p=*p-*q;
      p++;
      q--;

  }

    for(i=0;i<=9;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
