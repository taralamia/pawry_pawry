#include<stdio.h>

int check_Primenum(int n);

int main()
{
   int n,flag=0;

  printf("Enter any number to check if it's Prime or not: ");
  scanf("%d", &n);

flag=check_Primenum(n);

 if(flag==0)
 {
     printf("%d is Prime number",n);
 }
else
{
    printf("%d is not Prime number",n);
}
return 0;
}
int check_Primenum(int n)
{
    int i=2;

    while(i<=n/2)
   {
       if(n%i==0)
       {
           return 1;
           break;
       }
     i++;
   }
  return 0;

}
