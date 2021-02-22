#include<stdio.h>
int main()

{
    int x,z;
    scanf("%d", &z);

    switch(z)
    {
    case 1:
          scanf("%d", &x);

          switch(x)
          {
          case 1 :
                 printf("Five");
                 break;

          case 2 :
                 printf("Six");
                 break;
          }

          break ;
    case 2:
            printf("Helllllllooooooooooo");
            break ;
    }

    return 0;



}
