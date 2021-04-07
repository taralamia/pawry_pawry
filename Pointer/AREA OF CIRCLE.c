#include<stdio.h>
float calculateArea(float ,float *ans1 ,float *ans2);
int main()
{
  float rd,area,peri;

  printf("Enter the radius of the circle: ");
  scanf("%f", &rd);

  calculateArea(rd,&area,&peri);

printf("Area is %.2f\nPerimeter is %.2f",area,peri);
   return 0;
}
float calculateArea(float rd,float *ans1,float *ans2)
{
    *ans1=3.14 * rd * rd;
    *ans2=2 * 3.14 * rd;

}
