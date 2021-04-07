#include<stdio.h>
int main()
{
    int i,index,min,arra[4];

    printf("Enter the integers: ");
    for(i=0; i<4 ; i++)
   {
    scanf("%d",&arra[i]);
   }

    min=arra[0];
    index=0;

    for(i=1; i<4 ; i++)
    {
     if(min>arra[i])
     {
         min=arra[i];
         index=i;

     }
    }
    printf("MIN value is %d", min);
    printf("\nThe Index Number is %d",index);
    printf("\nElement Number of the array is %d",index+1);
    return 0;
}

