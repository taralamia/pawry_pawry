#include<stdio.h>
int primeFactor(int k);
int main()
{
    int n;
 printf("Enter the Positive number: ");
 scanf("%d", &n);


   primeFactor(n);
}
int primeFactor(int k)
{

    for(int i=2; k>1 ; i++)
    {
        while(k%i==0)
        {
          printf("%d\t",i);
          k=k/i;

        }
    }





}
