#include<stdio.h>
int main()
{
    int i,res=1,n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    /*printf("Enter the value of x: ");
    scanf("%d", &x);*/

    for(i=1; i<=n; i++)
    {
        res = res * i;
    }
    printf("result=%d", res);


  return 0;

}
