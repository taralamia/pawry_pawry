#include<stdio.h>
int main()
{
    int salary;
    float tax;
    printf("Enter Monthly salary: ");
    scanf("%d", &salary);
    if(salary>=50000)
    {
        tax=(float) salary*0.40;
    }
    else if(salary>=30000 && salary<50000)
    {
        tax= (float) salary*0.30;
    }
    else
    {
        tax= (float) salary*0.20;
    }
    printf("Tax is %.2f", tax);

return 0;
}
