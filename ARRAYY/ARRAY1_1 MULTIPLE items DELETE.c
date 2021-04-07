#include<stdio.h>
int main()
{
    int i,j,k,n;

printf("Enter the Size of an Array: ");
scanf("%d",&n);

   int a[n];
printf("Enter the Elements of the Array\n");

       for(i=0; i<n ; i++)
       {
           scanf("%d",&a[i]);
       }
 for(i=0; i<n ; i++)
   {
     for(j=i+1; j<n ; j++)
     {
         if(a[i]==a[j])
         {
             for(k=j; k<n; k++)
            {
                a[k]=a[k+1];
            }
             n--;
             j--;
         }


     }
   }
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
