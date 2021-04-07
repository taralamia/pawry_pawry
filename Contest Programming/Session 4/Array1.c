#include<stdio.h>
int main()

{
    int i,j;

    int arr[4][4] ={ {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0} };

    for(i=0; i<4; ++i)
    {
        for(j=0; j<4; ++j)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
return 0;
}
