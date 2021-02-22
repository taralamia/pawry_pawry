#include<stdio.h>
int main()
{
    float cost,dis;

    printf("Enter the Price of the Book:\n ");
    scanf("%f",&cost);

    if(cost>500&& cost<1000)
    {
        dis=cost * 0.10;

    }
    else if(cost<1500 && cost>1000)
    {
        dis=cost * 0.12;

    }
    else if(cost>=1500)
    {
        dis=cost * 0.15;

    }
    else if(cost<500)
    {
        printf("No Discount");
    }

    cost=cost-dis;


    printf("\nTotal price of the Book with discount %.2f",cost);

    return 0;

}
