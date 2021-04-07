#include<stdio.h>
int natural_Num(int n);
int main()
{
    int n=1;


    natural_Num(n);

    return 0;
}
int natural_Num(int n)
{

    if(n<=3)
    {
        natural_Num(n+1);
        printf("%d\t",n);
    }
    return n;
}
