#include<stdio.h>
float circle0fArea(float radius_circle);
float circle0fPerimeter(float radius_circle);

int main()
{
    float radius;

    printf("Enter the radius: ");
    scanf("%f", &radius);


    printf("Area=%.2f\n",circle0fArea(radius));
    printf("Perimeter=%.2f",circle0fPerimeter(radius));

    return 0;
}
float circle0fArea(float radius_circle)
{

    float area;

    area= 3.14 * radius_circle * radius_circle;

    return area;
}
float circle0fPerimeter(float radius_circle)
{
    float perimeter;

    perimeter=2*3.14*radius_circle;

    return perimeter;
}
