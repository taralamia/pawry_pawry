#include<stdio.h>
int isgcd_rec(int n1, int n2, int i);
int islcm_rec(int n1, int n2, int g);
int main()
{
    int n1,n2,i;

    printf("Enter two values: ");
    scanf("%d%d", &n1, &n2);

i= (n1<n2)? n1 : n2;//taking the min value,
i= (n1>n2)? n1 : n2;//taking the max value,

printf("GCD is %d\n", isgcd_rec(n1,n2,i));
printf("LCM is %d\n", islcm_rec(n1,n2,i));

    return 0;
}
int isgcd_rec(int n1, int n2, int i)
{

  if(n1%i==0 && n2%i==0)
     return i;
else
    return isgcd_rec(n1,n2,i-1);

}

int islcm_rec(int n1, int n2, int i)
{
    if(i%n1==0 && i%n2==0)
        return i;
    else
        return islcm_rec(n1,n2,i+1);

}
