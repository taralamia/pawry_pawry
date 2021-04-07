#include <stdio.h>
 int prime();
 int main ()
 {
     int ll,ul;

     printf("Enter the lower limit and upper limit: "); //
     scanf("%d %d",&ll,&ul);

     for(ll;ll<=ul;ll++)
     {

         if(prime(ll)==0)
            printf("%d\t",ll);
     }
 }

 int prime (int n)
 {
    int i=2,flag=0;

    while(i<=n/2)
    {

        if(n%i==0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
       return 0;
    else
       return 1;
 }
