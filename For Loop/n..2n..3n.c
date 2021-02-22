//1..2..3..n,
//2..4..6..2n,
//3..6..9..3n,
//n..2n..3n..,
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Multiplication Table for %d is :\n", n);

    for(i=1; i<=n; i++)

    {
        for(j=1; j<=n; j++)
       {
           printf("%d x %d=%d\n",i,j,i*j);
       }
       printf("\n");
    }



    return 0;

}
