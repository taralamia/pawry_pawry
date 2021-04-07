#include<stdio.h>
float circleArea(float rad);
float circlePerimeter(float rad);
int main()
{
    float area,peri,r;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area=circleArea(r);
    peri=circlePerimeter(r);

    printf("%.3f is the area of the circle\n %.3f is the perimeter of the circle", area,peri);
return 0;
}
float circleArea(float rad)
{

    return 3.14 * rad *rad;
}
float circlePerimeter(float rad)
{

    return 2 * 3.14 * rad;
}
