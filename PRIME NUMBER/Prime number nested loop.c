#include<stdio.h>
int main ()
{
    int i,j,flag = 1;

    for(j=2; j<=100; j++)
    {
        flag = 1;
        for(i=2; i<j; i++)

        {
            if(j%i == 0)
            {
                flag = 0;
                break;
            }
        }

   if(flag==1)
    printf("%d: is Prime Number\n", j );
   else
    printf("%d: is not Prime Number:\n", j);
    }

    return 0;

    }
