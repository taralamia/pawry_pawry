#include<stdio.h>
int main()
{
    int i,index,max,arra[7];

    printf("Enter the integers: ");
    for(i=0; i<7 ; i++)
   {
    scanf("%d",&arra[i]);
   }

    max=arra[0];
    index=0;

    for(i=1; i<7 ; i++)
    {
     if(max<arra[i])
     {
         max=arra[i];
         index=i;

     }
    }
    printf("MAX value is %d", max);
    printf("\nThe Index Number is %d",index);
    printf("\nElement Number of the array is %d", index+1);
    return 0;
}
