#include <stdio.h>
int main()
{
  int arr1[3]={1,2,3},i,j,temp;

  printf("Before Swapping the elements are\n");
for(i=0; i<3 ; i++)
{
    printf("%d\n", arr1[i]);
}


  for(j=2,i=0; i<2 , j>=0; j--,i++)
  {
      temp=arr1[i];
      arr1[i]=arr1[j];
      arr1[j]=temp;
  }
  printf("After Swapping the elements are\n");
for(i=2; i>=0 ; i--)
{

    printf("%d\n", arr1[i]);
}

return 0;
}
