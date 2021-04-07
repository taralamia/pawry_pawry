#include<stdio.h>
int add();

int main()
{
    int sum;

    sum=add();

    return 0;
}
int add()
{
    int a,b,sum;

    printf("Enter two number: ");
    scanf("%d%d", &a,&b);

   sum=a+b;

    printf("%d is the sum", sum);
    return sum;
}
