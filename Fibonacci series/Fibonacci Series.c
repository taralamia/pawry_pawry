#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,t3;
    printf("Enter the number of terms to be printed: ");
    scanf("%d", &n);
    printf("%d+", t1);
    printf("%d+", t2);
    for(i=3; i<=n; i++)
    {
        t3=t1 + t2;
        printf("%d+", t3);
        t1=t2;
        t2=t3;
    }

    return 0;
}
