#include<stdio.h>
int mergeArray(int a[],int s1, int b[], int s2);
int dupliDel(int mergeArray[], int s1, int s2);
int main()
{
    int i,s1,s2;

 printf("Enter the size of the First Array: ");
 scanf("%d",&s1);

 printf("\nEnter the size of the Second Array:");
 scanf("%d",&s2);
  int a[s1],b[s2];

printf("\nEnter the Elements of the First Array");

   for(i=0;i<s1;i++)
   {
       scanf("%d",&a[i]);
   }


printf("\nEnter the Elements of the Second Array");

 for(i=0; i<s2 ; i++)
 {
     scanf("%d",&b[i]);
 }

   mergeArray(a,s1,b,s2);


return 0;
}
int mergeArray(int a[],int s1, int b[], int s2)
{

    int mArray[100],i;

    for(i=0; i<(s1+s2); i++)
    {
        if(i<s1)
            mArray[i]=a[i];
        else
            mArray[i]=b[i-s1];
    }

 printf("\nAfter Merging the Two Array-");

    for(i=0; i<(s1+s2); i++)
    {
        printf("%d\t",mArray[i]);
    }

}
