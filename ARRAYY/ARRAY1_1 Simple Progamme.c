#include<stdio.h>
int main()
{
    int n[5];
    int i;
for(i=0; i<5 ; i++)
{
    scanf("%d", &n[i]);
}
    for(i=0; i<5 ; i++)
    {
        printf("Element [%d]=%d\n",i,n[i]);
    }
    return 0;
}

