#include<stdio.h>
int main()
{

    int arr[3];

    printf("The size of the array %d",sizeof arr[3]);
    printf("\nTotal Elements are in this array %d",sizeof (arr)/sizeof (arr[0]));

    return 0;
}
