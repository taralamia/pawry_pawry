#include<stdio.h>
int main()
{
  int a=12, b=35, c=5;
  if(a<=b)
  {
      if(a<=c)
      {
          printf("%d\n", a);
          printf("%d\n", c);
          printf("%d\n", b);
      }
      else
      {
          printf("%d\n", c);
          printf("%d\n", a);
          printf("%d\n", b);
      }
    }
    else
    {
        if(b<=c)
        {
            printf("%d\n", b);
            printf("%d\n", c);
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", b);
            printf("%d\n",a);
        }
    }



  return 0;

}
