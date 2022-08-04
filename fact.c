#include<stdio.h>
void fact(int n);
main()
{
int n,i;
printf("\n enter no");
scanf("%d",&n);
  fact(n);
}
void fact(int n)
{
  for(i=0;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
}
