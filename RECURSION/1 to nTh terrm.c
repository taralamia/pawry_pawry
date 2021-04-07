#include<stdio.h>
int show(int n);
int main()
{
    int lim;

    printf("Enter the limit: ");
    scanf("%d", &lim);

    show(lim);

    return 0;

}
int show(int n)
{
    if(n>0)
        show(n-1);
    else
        return n;
    printf("%d\t",n);
}
