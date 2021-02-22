#include<stdio.h>


int main()

{
    int km;

    printf("Enter the distance in km: ");
    scanf("\n%d", &km);

    printf("In meter= %d\n", km*1000);

    printf("In centimeter= %d\n", km*100000);

    printf("In Feet= %.2f\n",(float)km*3280.84);

    printf("In inches= %.2f\n",(float)km*3970.1);

    return 0;

}
