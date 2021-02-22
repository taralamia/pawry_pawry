#include<stdio.h>
int main()
{
    int i,sum = 0;

    for(i=3; i<=1691; i+=8)
    {
        sum += i;

    }
    printf("Sum=%d", sum);

    return 0;

}
//last number deua ache, term lagbena//(3+11+19+...)
