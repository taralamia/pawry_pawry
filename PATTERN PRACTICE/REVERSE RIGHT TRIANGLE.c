#include<stdio.h>
int main()
{

    int i,n,j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=n; i>=1 ; i--)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }









    return 0;

}
