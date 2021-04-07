
#include<stdio.h>
#include<string.h>
int main()

{
  char ori[100],rev[100];
    int i,length;

printf("Enter the String: ");
    gets(ori);
    length=strlen(ori);

    for(i=0;ori[i]!='\0';i++)
    {

        rev[i]=ori[length-1-i];

    }



    printf("The Original String\n");
    puts(ori);
    printf("The Reversed String\n");
    puts(rev);

}
