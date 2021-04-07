#include<stdio.h>
int fact(int num);
int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("%d is the factorial of the given number %d", fact(num),num);

    return 0;
}
int fact(int num)
{
    if(num>0)
    return (num * fact(num-1));
    else
        return 1;
}
