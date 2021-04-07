#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=5;

 int *fptr;

    fptr=(int *) calloc(n,4);

 if(fptr==NULL)
 {
     printf("Memory has not allocated\n");
     exit(0);
 }
    else
    {
         for(i=0;i<n;i++)
     {
         scanf("%d",&fptr[i]);
     }
    free(fptr);

    printf("Calloc Memory Successfully Freed.");
    }


 return 0;

}
