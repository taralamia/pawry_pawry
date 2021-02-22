#include<stdio.h>
int main()
{
    float units,cost;

    printf("Enter number of units\n: ");
    scanf("%f", &units);

    if(units <= 100)
    {
        cost = units * 5.5;
    }
    else if (units> 100 && units<=300)
    {
        cost = 100* 5.5 +(units - 100) *8;
    }
    else if(units >300)
    {
        cost= 100*5.5 + 200*8 + (units - 300) *12;
    }
    cost= cost + cost * 0.15 + 120;


    printf("Total cost: %.2f", cost);


    return 0;

}
