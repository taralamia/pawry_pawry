#include<stdio.h>
int main()
{
    int i,n, sum =0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<n; i++)
     {
       if(n % i == 0)

           sum = sum + i;
     }
       if(n == sum)
        printf("Perfect Number: %d", n);
       else
        printf("Not a Perfect Number: %d",n);


    return 0;

}
