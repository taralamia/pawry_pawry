#include<stdio.h>
int check_perfect(int num);
int main()
{
  int st,ed;
  printf("Enter the Starting and Ending Number: ");
  scanf("%d%d",&st,&ed);

printf("Perfect Numbers are\n");

  for(st ; st<=ed ; st++)
  {
      if(check_perfect(st))
      {
          printf("%d \t",st);
      }
  }
 return 0;
}
int check_perfect(int num)
{

    int i=1,sum=0;

    while(i<num)
    {
        if(num%i==0)
    {
        sum=sum+i;
    }
        i++;
    }
      if(sum==num)
           return 1;
    else
        return 0;

}
