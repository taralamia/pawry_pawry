#include<stdio.h>
int checkand_displayPRIMEnum(int n);

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);

    checkand_displayPRIMEnum(n);

    return 0;
}
int checkand_displayPRIMEnum(int n)
{
    int i,flag=0;

    for(i=2;i <=n/2 ; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
if(flag==0)
{
    printf("%d is a Prime Number",n);
}
else
{
    printf("%d is not a Prime Number", n);
}


}
