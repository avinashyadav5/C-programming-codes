#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
  printf("(");
  for(int j=1;j<=i;j++)
  {
   printf("%d",j);
   if(j<i)
   printf("+");
  }
  printf(")");
  if(i<n)
  printf("+");
  }
 return 0;
}
