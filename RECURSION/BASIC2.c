#include<stdio.h>
int natural(int n);
int main()
{
   int n=5;
   natural(n);
   return 0;
}
int natural(int n)
{
    if(n<6)
    {
        natural(n+1);
        printf("%d\t",n);

    }
    return n;

}
