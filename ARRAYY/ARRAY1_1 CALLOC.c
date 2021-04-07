#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=5;
    int *ptrc;
 ptrc=(int *) calloc(5,4);

    if(ptrc==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptrc[i]);
        }

    }

   for(i=0;i<n;i++)
   {
       printf("%d,",ptrc[i]);
   }
    return 0;
}
