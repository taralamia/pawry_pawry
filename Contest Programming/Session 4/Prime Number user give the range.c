#include<stdio.h>
int main()
{
    int i,j,first_num,last_num,flag=0;

    printf("All the prime numbers between first number to last number: ");
    scanf("%d%d",&first_num, &last_num);


    for(j=2; j<=last_num; j++)
    {
        flag=0;
        for(i=2; i<j; i++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
        }
  if(flag==1)
    printf("%d: Not Prime\n",j);
  else
      printf("%d: Prime\n",j);
    }

  return 0;

}
