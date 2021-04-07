#include<stdio.h>
int main()
{
    char sen[100];
    int i,len=0;

 printf("Enter a Sentence: ");
 gets(sen);

   for(i=0; sen[i]!='\0'; i++)
   {
      len++;

   }
   puts(sen);
printf("%d",len);

return 0;
}
