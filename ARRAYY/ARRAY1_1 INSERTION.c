#include<stdio.h>
int main()
{
    int i,n,position,value;

printf("Enter the size of the Array: ");
scanf("%d",&n);
    int ar[n];

printf("Enter the elements of the Array\n");

    for(i=0; i<n ; i++)
    {
        scanf("%d",&ar[i]);
    }

printf("Enter the Position to be inserted: ");
scanf("%d",&position);
printf("\n");
printf("Enter the value of the entered Position: ");
scanf("%d", &value);

    for(i=n; i>=position-1 ; i--)
    {
        ar[i]=ar[i-1];

    }
ar[position-1]=value;

 printf("After Insertion\n");
   for(i=0; i<n+1 ; i++)
   {
       printf("%d\t",ar[i]);
   }




}
