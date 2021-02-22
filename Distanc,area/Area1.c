#include<stdio.h>
int main()
{
    float length, width, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    //fflush(stdin);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("perimeter of rectangle is= %f\n", perimeter );
    return 0;
}


