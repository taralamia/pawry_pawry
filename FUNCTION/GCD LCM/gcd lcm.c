
#include<stdio.h>
int isGcd(int n1, int n2, int n3);
int isLcm(int n1, int n2, int n3);
int main()
{
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a, &b, &c);

    //gcd=isGcd(a,b,c);
    //lcm=isLcm(a,b,c);

printf("\nGCD=%d",isGcd(a,b,c));
printf("\nLCM=%d",isLcm(a,b,c));


return 0;
}
int isGcd(int n1, int n2, int n3)
{
    int min,gcd;

    min= (n1<n2) ? (n1<n3 ? n1 : n3) : (n2<n3 ? n2 :n3);

    for (int i=min; i>=1 ; i--)
    {
        if(n1%i==0 && n2%i==0 && n3%i==0)
        {
            return gcd=i;
            break;//break na use korleo cholbe
        }
    }


 }
int isLcm(int n1,int n2,int n3)
{
  int max,lcm;

  max= (n1>n2) ? (n1>n3 ? n1 : n3) : (n2>n3 ? n2 :n3);

   for(int i=max; i>=max; i++)
    {
        if(i%n1==0 && i%n2==0 && i%n3==0)
        {
            return lcm=max;
            break;
        }
    }
}
