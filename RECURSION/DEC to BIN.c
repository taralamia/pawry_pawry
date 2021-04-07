#include<stdio.h>
int dec2bin(int n);
int main()
{
   int n;
   printf("Enter the Decimal Number to find its Binary: ");
   scanf("%d",&n);

   printf("The Binary of %d \n",dec2bin(n));

    return 0;
}
int dec2bin(int n)
{
    if(n>0)
    {
        dec2bin(n/2);
        printf("%d",n%2);
    }
 return n;

}
