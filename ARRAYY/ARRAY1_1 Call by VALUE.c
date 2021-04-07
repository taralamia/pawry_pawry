#include<stdio.h>
int valuepass(int p);
int main()
{
   int i,ara[3];

 for(i=0; i<3 ; i++)
 {
     scanf("%d",&ara[i]);
 }
    valuepass(ara[2]);
  return 0;
}
int valuepass(int p)
{

  printf("%d\n",p);
  p=30;//Unchanged because we aren't changing any index value of the array

}
