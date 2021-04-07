#include<stdio.h>
double add(double num1, double num2);
int main()
{
    double num1,num2;

    add(num1,num2);
return 0;
}
double add(double num1, double num2)
{
    printf("Enter two number: ");
    scanf("%lf%lf", &num1,&num2);
    printf("The sum of the two number is %lf", num1+num2);

    return num1+num2;

}
