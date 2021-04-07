#include<stdio.h>
int arrayPass(int p[]);
int main()
{
    int i,arr[4];
    int otherarr[4]={4,5,7,9};

 for(i=0; i<4 ; i++)
 {
     scanf("%d",&arr[i]);

 }
arrayPass(arr);

printf("%d\n",arr[3]);

arrayPass(otherarr);

printf("%d\n",otherarr[3]);

return 0;
}
int arrayPass(int p[])
{
   printf("%d\n",p[3]);
    p[3]=20;
}
