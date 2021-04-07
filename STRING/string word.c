#include<stdio.h>
int main()
{
   char sen[100];
   int wCount=0,sCount=0,lCount=0,tLength=0,i;  //I am a girl

    printf("Enter a Sentence: ");

 gets(sen);
     for(i=0; sen[i]!='\0'; i++)
     {
         if(sen[i]==' ')
         {
            sCount++;
         }
       tLength++;
     }
  wCount=sCount+1;

 printf("Total Word: %d\n Total Length: %d",wCount,tLength);

    return 0;
}
