#include<stdio.h>
int main()
{
  float arr[5],sum=0,aver=0;
  int i;


 for(i=0; i<5 ; i++)
 {
     scanf("%f",&arr[i]);
 }
for(i=0; i<5 ; i++)
{
    sum=sum+arr[i];
}
aver=sum/5;

printf("\nSUM = %.2f",sum);
printf("\nAVERAGE= %.2f",aver);

    return 0;
}
