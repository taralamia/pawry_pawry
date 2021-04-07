#include<stdio.h>
int main()
{
    int i,arr[5]={56,26,12,3};

    for(i=0; i<4; ++i)
    {
        printf("Start Loop %d\n", i);
        if (arr[i]==12)
        {
            continue;
        }

       printf("End of Loop %d\n", i);

    }



    return 0;


}
