
#include <stdio.h>
int main()
{
    int n1, n2, n3,min, lcd, i;

    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    min=(n1<n2) ? (n1<n3 ? n1:n3) : (n2<n3 ? n2:n3);

    for(i=min; i<=1 ; i++)
    {

        if(n1%i==0 && n2%i==0 && n3%i==0)
        {
            lcd = i;


        }

        printf("LCD is %d\n",lcd);

        return 0;
    }

}
