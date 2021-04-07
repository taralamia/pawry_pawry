#include<stdio.h>
int main()
{
    int n,i,value,delIndex,get;

 printf("Enter the Size of an Array: ");
 scanf("%d",&n);

    int a[n];
    printf("The Elements of the Array\n");
 for(i=0; i<n ;i++)
    {
        scanf("%d",&a[i]);
    }
 printf("Enter the value to be deleted: \n");
 scanf("%d",&value);

    for(i=0; i<n ; i++)
    {
        if(a[i]==value)
        {
            get=1;
            delIndex=i;
            break;
        }

    }
 if(get==1)
 {
     for(i=delIndex; i<n ; i++)
     {
        a[i]=a[i+1];
     }
     for(i=0; i<n-1; i++)
     {
         printf("%d",a[i]);
     }

 }
    else
    {
        printf("The value is not found that has been entered\n");
    }

  return 0;
}

