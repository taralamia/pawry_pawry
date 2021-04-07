#include<stdio.h>
int main()
{

    int id[5],marks[5],i,max,mIndex;


    for(i=0; i<5 ; i++)
{
    scanf("%d",&id[i]);
    scanf("%d",&marks[i]);
    printf("\n");
}
max=marks[0];
mIndex=0;
  for(i=1; i<4 ; i++)
  {
      if(max<marks[i])
      {
          max=marks[i];
          mIndex=i;
      }
  }

 printf("ID %d has got the highest marks: %d",mIndex+1, max);

    return 0;


}
