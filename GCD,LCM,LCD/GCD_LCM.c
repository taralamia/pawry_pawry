#include<stdio.h>
int main()
{
    int n1,n2,n3,i,min,max,gcd,lcm;
    printf("Enter the value of n1,n2,n3: ");
    scanf("\n%d%d%d: ", &n1,&n2,&n3);

    min = (n1<n2) ? (n1<n3? n1:n3) : (n2<n3 ? n2:n3);
    for(i=min; i>=1; i--)
    {
        if(n1%i==0 && n2%i==0 && n3%i==0)
        {
            gcd=i;
            break;
        }
    }

max =(n1>n2) ? (n1>n3 ? n1:n3) : (n2>n3 ? n2:n3);

   for(i=max; i>=max; i++)
   {
       if(i%n1==0 && i%n2==0 && i%n3==0)
       {
           lcm= max;
           break;
       }
   }

printf("\nGCD=%d", gcd);
printf("\nLCM=%d", lcm);






return 0;

}

