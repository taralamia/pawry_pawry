#include<stdio.h>
void leftArray(int a[],int n);
void leftArrayD(int a[],int d, int n);
int main()
{
    int i,n,d;
printf("Enter the size of the Array: ");
scanf("%d",&n);

     int a[n];
 printf("\nEnter the Elements of the Array\n");

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }

printf("\nEnter the position to get shifted the elements\n");
scanf("%d",&d);

leftArrayD(a,d,n);

    return 0;
}
void leftArrayD(int a[], int d,int n)
{
    int i;
for(i=0; i<d; i++)
    leftArray(a,n);


 for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}

}


void leftArray(int a[], int n)
{
    int i,temp=a[0];

 for(i=0; i<n-1;i++)

 {
   a[i]=a[i+1];
 }
    a[n-1]=temp;

}


