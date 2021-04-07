#include<stdio.h>
int main()
{
    int i,arr[4]={5,6,7,8};

    for(i=0; i<4; ++i)
    {
        printf("Start of Loop %d\n", i);

        if(arr[i]==7)
        {
            break;
        }

        printf("End of Loop %d\n", i);
    }
    return 0;

}
