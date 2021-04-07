#include<stdio.h>
int fac(int n);
int main()
{
  int n,res;
  printf("Enter the Positive number: ");
  scanf("%d", &n);

  res=fac(n);

  printf("%d is the factorial of the given positive number",res);
  return 0;
}
int fac(int n)
{
    if(n==1)
        return 1;
    else
        return n*fac(n-1);
}
