#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,1000}, i;

    for(i=0; i<9 ; i++)
    {
        printf("%d is the elements of: %d\n",i+1,arr[i]);
    }


    return 0;
}
