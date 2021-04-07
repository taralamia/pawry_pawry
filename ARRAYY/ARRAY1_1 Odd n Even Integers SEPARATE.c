#include<stdio.h>
int main()
{
    int i,n;

 printf("Enter the size of the array: ");
 scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
printf("\nThe Even Integers are\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }

    printf("\nThe Odd Integers are\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}
