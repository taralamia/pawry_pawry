#include<stdio.h>
int main()
{

    int i,num,flag=1;



    printf("Enter the number to check whether it's Prime number or not: ");
    scanf("%d", &num);

    i=2;

    while(i<num)
    {

        if(num%i==0)

        {
            flag=0;
            break;


        }

        i++;

    }

     if(flag==1)

         printf("%d is prime number\n",num);

     else

         printf("%d is not a prime number\n",num);



    return 0;

}
