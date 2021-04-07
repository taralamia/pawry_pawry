#include<stdio.h>
int main()
{
    char sen[100];
    int i,sCount=0,wCount=0;

 printf("Enter a sentence: ");
   gets(sen);

    for(i=0; sen[i]!='\0'; i++)
    {
        if(sen[i]==' '&& sen[i+1]!=' ')
            {
                sCount++;
            }
    }


   wCount=sCount+1;

    printf("Total Words are: %d",wCount);

    return 0;
}
