
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


    if(hs>60 && cc<0.7 && ts>5000)

    {
        printf("Steel grade is 10\n");
    }

    else if (hs>60 && cc<0.7 && ts<5000)
    {
        printf("Steel grade is 9\n");
    }
    else if (hs<60 && cc<0.7 && ts>5000)
    {
        printf("Steel grade is 8\n");
    }
    else if (hs>60 && cc>0.7 && ts>5000)
        {
            printf("Steel grade is 7\n");
        }
      else if (hs>60 || cc<0.7 || ts>5000)
     {
          printf("Steel grade is 6\n");
     }
       else if (hs<60 && cc>0.7 && ts<5000)
       {
           printf("Steel grade is 5\n");
       }




    return 0;

}

