#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st value: ");
    scanf("%d", &num1);
    printf("Enter the 2nd value: ");
    scanf("%d", &num2);

    int temp;
    temp=num1;
    num1=num2;
    num2=temp;

    printf("value of num1=%d\nvalue of num2=%d\n", num1 ,num2);
    return 0;

}
