#include<stdio.h>
int main()
{
    int n1, n2, n3,min, lcd, i;

    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    min=(n1<n2 && n1<n3) ? n1 : (n2<n3) ? n2:n3;

    for(i=min; ; ++i)
    {

        if(n1%i==0 && n2%i==0 && n3%i==0)
        {
            lcd = i;


        }

        printf("LCD of %d, %d and %d = %d\n",n1,n2,n3,lcd);

        return 0;
    }



}
