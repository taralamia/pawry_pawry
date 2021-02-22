#include<stdio.h>
int main()
{
   char choice;
   float n1,n2,res;

   printf("Enter the choices [+, -, *, /]: ");
   scanf("%c", &choice);

   switch(choice)
   {
   case '+' :
            printf("Enter any two values: ");
            scanf("%f%f", &n1, &n2);
            res= n1 + n2;
            printf("Result= %.2f", res);
            break;
   case '-' :
            printf("Enter any two values: ");
            scanf("%f%f", &n1, &n2);
            res= n1 - n2;
            printf("Result= %.2f", res);
            break;
   case '*' :
            printf("Enter any two values: ");
            scanf("%f%f", &n1, &n2);
            res= n1 * n2;
            printf("Result= %.2f", res);
            break;
   case '/' :
             printf("Enter any two values: ");
            scanf("%f%f", &n1, &n2);
            res= n1 / n2;
            printf("Result= %.2f", res);
            break;

      default :
              printf("Invalid Input");



   }


 return 0;






}
