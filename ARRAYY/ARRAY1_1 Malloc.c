#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=5;
    int *ptr;

 ptr=(int*) malloc(5*sizeof (int));

    if(ptr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
    {
          scanf("%d",&ptr[i]);//ptr[i]=i+1;
    }

    }

    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }

  return 0;

  }

