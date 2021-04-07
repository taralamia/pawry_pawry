#include<stdio.h>
float addition(float ,float );
float substraction(float ,float);
float multiplication(float ,float);
float divison(float, float);
int main()
{
    char ch;
    float n1,n2,add,sub,multi,div;

    printf("Enter the choice: ");
    scanf("%c", &ch);

    printf("Enter the two numbers:");
    scanf("%f%f",&n1,&n2);

    if(ch=='+')
        add=addition(n1,n2);
    else if(ch=='-')
       sub=substraction(n1,n2);
    else if(ch=='*')
        multi=multiplication(n1,n2);
    else if(ch=='/')
       div=divison(n1,n2);
    else
        printf("Invalid Input");

return 0;
}
float addition(float n1 ,float n2)
{

    printf("Sum of the two numbers: %.2f",n1+n2);

}
float substraction(float n1,float n2)
{

   printf("Substraction of the two numbers: %.2f",n1-n2);

}
float multiplication(float n1 ,float n2)
{
    printf("Multiplication of the two numbers: %.2f",n1*n2);

}
float divison(float n1, float n2)
{
    printf("Divison of the two numbers: %.2f",n1/n2);

}
