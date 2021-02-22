
#include <stdio.h>

int main ()
{
    long int x=2, sum=1;

    for (x=2; x<=37; x+=5)                                            //2 * 7 * 12 * ... * 37
    {
        sum*=x;
    }

    printf("SUM Value = %d\n\n", sum);

    return 0;
}
