#include<stdio.h>
int main()
{
    int i,n,sum=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++)

    {
        /*printf("%d+", i); na likhleo cholbe   */


        sum=sum+i;
    }

    printf("Sum=%d\t", sum);


}
