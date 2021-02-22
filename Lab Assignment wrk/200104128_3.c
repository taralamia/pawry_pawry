#include<stdio.h>
int main()
{
    int marks;

    printf("Enter the percentage Marks: ");
    scanf("%d",&marks);

    if(marks >=80 && marks <=100)

        printf("Grade A+");

     else if(marks >=75 && marks <=79)

    printf("Grade A");

 else if (marks >=70 && marks <=74)

    printf("Grade A-");

 else if(marks >=60 && marks<=64)

    printf("Grade B");


    else if(marks>=55 && marks<= 59)


printf("The grade is B-");

    else if(marks>=50 && marks<= 54)

        printf("The grade is C+");

    else if(marks>=45 && marks<= 49)

        printf("The grade is C");

    else if(marks>=40 && marks<= 44)

        printf("The grade is D");

    else if(marks>=00 && marks<= 40)

        printf("The grade is F");
    else
        printf("The Number is invalid in grading system");

    return 0;
}









