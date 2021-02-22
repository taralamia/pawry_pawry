#include<stdio.h>
int main()
{
    int i,sum=0;

    for(i=1; i<=20; i++)
    {
        if(i % 6 == 0)

            sum = sum + i;
        }
        printf("Sum=%d", sum);

   return 0;
}
