#include<stdio.h>
int main()
{
    int i,size,j,count;
    int freq[50];

printf("Enter the Size of the Array: ");
scanf("%d",&size);

int a[size];

    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
 for(i=0; i<size; i++)
 {
     count=0;
     for(j=i+1; j<size; j++)
     {
         if(a[i]==a[j])
         {
             freq[j]=0;
             count++;
         }
     }
 if(freq[i]!=0)

    freq[i]=count;

 }
    for(i=0; i<size; i++)
    {
        if(freq[i]!=0)
    {
        printf("\n%d Occurs %d times.",a[i],freq[i]);
    }
  }
 return 0;

}
