#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    printf("Enter the value of n: ");      //1^2+2^2+3^3+..
    scanf("%d", &n);

    for(i=1; i<=n ; i++)
      {
          x=i*i;
          sum = sum + x;
      }
      printf("sum is %d", sum);


     return 0;

}
