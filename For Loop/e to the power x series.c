#include<stdio.h>
int main()
{
    float i,n=4;

    float fac=1,x,sum=0;                              //1+1(square)/1!+2(square)/2!+..

    printf("Enter the value of x : ");
    scanf("%f", &x);

    for(i=1; i<=n; i++)
    {

                         //1!..2!..3!..
        fac*=i;                           //1(square),2(square),3(square)
        sum = sum + (pow(x,i)/fac);


    }

    printf("The sum of the series :%.2f ", sum);


    return 0;

}
/*

*/











