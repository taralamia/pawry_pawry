#include<stdio.h>
int main()
{
    int position,n,i;

    printf("Enter the Size of the Array:\n ");
    scanf("%d",&n);

    int a[n];

    printf("Elements of the array is\n");
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the Position: ");
    scanf("%d", &position);

    if(position<0 || position>n)
    {
        printf("INVALID INPUT\n");
    }

    else
    {
        for(i=position-1 ; i<n ; i++)
        {
            a[i]=a[i+1];
        }
        printf("After Deletion\n");

        for(i=0 ; i<n-1 ; i++)
        {

            printf("%d\t",a[i]);

        }
    }
    return 0;

}
