#include<stdio.h>
int swaapp(int *n, int *p);
int main()
{
    int a, b;
 printf("Enter the values of a and b: ");
 scanf("%d%d", &a, &b);

    swaapp(&a,&b);
 printf("After Swapping the new values are %d and %d",a,b);

}
int swaapp(int *n, int *p)
{
    int temp;
 temp=*n;
 *n=*p;
 *p=temp;

}
