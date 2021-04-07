#include<stdio.h>
double circlearea(double r);
double circleperimeter(double r);
double circlediameter(double r);
int main()
{
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    printf("Area=%.2lf\n",circlearea(radius));
    printf("Perimeter=%.2lf\n",circleperimeter(radius));
    printf("Diameter=%.2lf\n",circlediameter(radius));


    return 0;
}
double circlearea(double r)
{
    double area;
    area=3.14*r*r;
    return area;
}
double circleperimeter(double r)
{
    double perimeter;
    perimeter=2*3.14*r;
    return perimeter;
}
double circlediameter(double r)
{
    double diameter;
    diameter=2*r;
    return diameter;
}
