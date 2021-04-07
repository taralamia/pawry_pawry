#include<stdio.h>
int pointerArray(int *p, int size);

int main()
{
    int a[]={1,2,3,4},i;

    pointerArray(a,4);

}
int pointerArray(int *p, int size)
{

    int i;
    for(i=0; i<size; i++)
    {
    printf("%d\t",*(p+i));
    }
}
