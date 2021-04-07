#include<stdio.h>
int main()
{
    char ch1,ch2;
    printf("Enter two characters:\n ");

    scanf("%c", &ch1);
    getchar();
    scanf("%c", &ch2);
    printf("%d\n%d\n",ch1, ch2 );

    return 0;
}
