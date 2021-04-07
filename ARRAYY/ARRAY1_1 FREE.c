#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=5;
    int *fptr;

    fptr=(int *) malloc(n*sizeof (int));

    if(fptr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        for(i=0; i<5; i++)
        {
            scanf("%d",&fptr[i]);
        }
        free(fptr);
        printf("Malloc memory successfully freed.\n");
    }

    return 0;

}
