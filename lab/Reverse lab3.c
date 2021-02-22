#include<stdio.h>
int main()
{
    int num;
    int reverse;

    printf("Enter a 4 digit number: ");
    scanf("%d", &num);

    int f = num % 10;
    int fm = (num/10) % 10;
    int ml = (num/100) % 10;
    int l = (num/1000) % 10;

    reverse= l*1000 + ml*100 + fm*10 + f*1;
    printf("Reverse value of%d=%d%d%d%d\n%d", num, f,fm,ml,l,reverse);
    printf("sum of 4 digits=%d\n", f+fm+ml+l);
    printf("Product of 4 digits=%d", f*fm*ml*l);
    return 0;

}
