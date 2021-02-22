#include<stdio.h>
int main()
{
    float hs,cc,ts;
     printf("Enter the value of Hardness: ");
     scanf("%f", &hs);

      printf("Enter the value of Carbon Content: ");
      scanf("%f", &cc);

      printf("Enter the value of Tensile Strength: ");
      scanf("%f", &ts);

      if(hs>60 && cc<.7 && ts>5000)

      {
          printf("The grade is 10");

       }
       else if (hs>60 && cc<.7 && ts<5000)
    {
       printf("The grade is 9");
    }

      else if (hs<60 && cc<.7 && ts>5000)
    {
       printf("The grade is 8");
    }

     else if (hs>60 && cc>.7 && ts>5000)
    {
       printf("The grade is 7");
    }
     else if (hs>60 || cc<.7 || ts>5000)
    {
       printf("The grade is 6");
    }
    else if (hs<60 && cc>.7 && ts<5000)
    {
       printf("The grade is 5");

    }
    else
    printf("The number is invalid");




    return 0;





}



