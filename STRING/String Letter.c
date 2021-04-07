#include<stdio.h>
int main()
{
    char sen[100];

    int i=0,wCount=0,lCount=0,sCount=0;

printf("Enter a Sentence: ");

    gets(sen);

    while(sen[i]!='\0')
    {
      if(sen[i]==' ')

       {
        sCount++;
       }
else if((sen[i]>='a' && sen[i]<='z')||(sen[i]>='A' && sen[i]<='Z'))
     {
        lCount++;
     }
  i++;
   }

wCount=sCount+1;

printf("Total Words are: %d\nTotal Letters are: %d",wCount,lCount);

return 0;
}
