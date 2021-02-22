#include<stdio.h>
int main()
{

    int purchased_price, selling_price;
    printf("Enter Purchased price: ");
    scanf("\n%d", &purchased_price);

    printf("Enter Selling price: ");
    scanf("\n%d", &selling_price);

    if(purchased_price>selling_price)
    {
        printf("\nloss=%d", purchased_price-selling_price);

    }
    else if(selling_price>purchased_price)
    {
        printf("\nprofit=%d", selling_price-purchased_price);
    }
    else
    {
        printf("moira jaaaaa");
    }
    return 0;


}


