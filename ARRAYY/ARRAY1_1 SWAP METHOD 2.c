#include<stdio.h>
int main()
{
    int i,j;
    int arr1[4]={9,8,7,6};
    int arr2[4];

printf("Before Swapping the elements are\n");

 for(i=0; i<4 ; i++)

 {
     printf("%d\t",arr1[i]);
 }
for(j=3,i=0; j>=0, i<4 ; j--, i++)
{
    arr2[j]=arr1[i];
}
for(i=0; i<4 ; i++)
{
    arr1[i]=arr2[i];
}

printf("\nAfter Swapping the elements are\n");

    for(i=0; i<4 ; i++)
    {
        printf("%d\t",arr2[i]);
    }

}
