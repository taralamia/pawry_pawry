#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number to check odd or even: ");
    scanf("%d", &num);

    switch(num%2)
    {
    case 0:
           printf("Given num is Even");
           break;

    case 1:
          printf("Given num is Odd");
          break;
    }
     return 0;
    }





