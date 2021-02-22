#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    float f1;
    char ch;

    printf("Enter integer value: ");
    scanf("%d", &n1);

    fflush(stdin);

    printf("Enter float value: ");
    scanf("%f", &f1);

    fflush(stdin);
    printf("Enter character value: ");//we can use getchar function instead fflush
    scanf("%c", &ch);


    printf("character value: %c\n", ch);

   printf("integer value: %d\n", n1);
   printf("floating value: %.2f\n", f1);

      return 0;


}
