#include<stdio.h>
int main()
{
  int i,j,row,col;

  printf("Enter the number of row and column: ");
  scanf("%d%d",&row,&col);

  int A[row][col];

  for(i=0;i<row;i++)
  {
      for(j=0;j<col;j++)
      {
          scanf("%d",&A[i][j]);
      }
  }
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
         printf("%d\t",A[i][j]);
     }

  printf("\n");
  }


return 0;
}
