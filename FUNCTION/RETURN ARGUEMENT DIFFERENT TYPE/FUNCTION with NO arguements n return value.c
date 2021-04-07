//Write a C progamme to check any number whether its prime or not
#include<stdio.h>
int checkPrimenumber();
int main()
{
    checkPrimenumber();

    return 0;
}
int checkPrimenumber()
{
    int i,n,flag=0;

    printf("Enter any number to check if its Prime Number or not: ");
    scanf("%d",&n);

    for(i=2; i<=n/2 ; i++)

    {
      if(n%i==0)
      {
         flag=1;
         break;
      }

    }
   if(flag==0)
   {
       printf("%d is a Prime Number", n);
   }
   else
   {
       printf("%d is not a Prime Number", n);
   }




}
