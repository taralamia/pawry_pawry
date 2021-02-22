#include<stdio.h>
#include<stdlib.h>
int main()



{
    int dis;

    printf("Enter the distance: ");
    scanf("%d", &dis);

    printf("In meter: %d\n", dis*1000);

    printf("In centimeter: %d\n", dis*10000);

    printf("Feet: %.2f\n", (float)dis*3280.84);

    printf("Inch: %.2f\n", (float)dis*39370.1);

    return 0;

}


