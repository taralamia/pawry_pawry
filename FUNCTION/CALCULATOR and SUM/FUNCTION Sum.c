#include<stdio.h>
void add();
int main()
{

    printf("This is the main function");
    add();

    return 0;
}
void add()
{
    int n1,n2;
    printf("Enter the two value: ");
    scanf("%d%d", &n1,&n2);
    printf("Result=%d", n1+n2);

}
