#include <stdio.h>
int main()
{
    int x, y,z, i, gcd,lcm;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y,&z);

    for(i=1; i <= x && i <= y && i <= z; ++i)
    {
        if(x%i==0 && y%i==0 && z%i==0)
            gcd = i;
    }

    lcm = (x * y * z) / gcd;

    printf("G.C.D of %d ,%d and %d is %d  \nL.C.M of %d ,%d and %d is %d  ", x, y,z, gcd,x,y,z,lcm);

    return 0;
}
