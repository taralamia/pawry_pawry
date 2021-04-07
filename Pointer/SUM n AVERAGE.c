#include<stdio.h>
float sum(float num1, float num2, float *s1);
float average(float num1, float num2,float *s1,float *a1);
int main()
{
    float num1,num2,s,a;

    printf("Enter the two values: ");
    scanf("%f%f", &num1, &num2);
sum(num1,num2,&s);
average(num1,num2,&s,&a);

 printf("Sum=%.2f\nAverage=%.2f",s,a);
    return 0;
}
float sum(float num1,float num2,float *s1)
{
    *s1=num1+num2;

}
float average(float num1,float num2,float *s1,float *a1)
{
    *a1=*s1/2;
}
