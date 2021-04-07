#include<stdio.h>
int fibo_rec(int n);
int main()
{
    int term,t1=1;
    printf("Enter the number of terms to be printed: ");
    scanf("%d",&term);

    for(t1=0; t1<term; t1++)
     {
        printf("%d+",fibo_rec(t1));

     }

    return 0;
}
int fibo_rec(int n)
{
    if(n<=1)
        return n;
    else
    return fibo_rec(n-1)+fibo_rec(n-2);

}
