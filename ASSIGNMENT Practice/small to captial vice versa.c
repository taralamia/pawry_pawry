#include<stdio.h>
int main()
{

    char ch;
    int as,vv;

    printf("Enter to character to print into small or capital: ");
    scanf("%c",&ch);

    as=(int)ch;

    if(as>=97 && as<=122)
    {
        vv=as-32;
        printf("The capital letter is %c",(char)vv);
    }
    else if(as>=65 && as<=90)
    {
        vv=as+32;
        printf("The Small letter is %c", (char)vv);
    }
   else
       {
           printf("Invalid Input");
       }

    return 0;
}

