#include<stdio.h>
int count(int n);
int main()
{
   int num;

printf("Enter number: ");
scanf("%d", &num);

   printf("Total Digits are %d\n",count(num));

return 0;
}
int count(int n)
{
  if(n==0)
        return 0;

  else
     return 1+count(n/10);
}
