#include<stdio.h>
int main()
{
int n;
printf("enter terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
  int a=i-1;
  for(int j=1;j<=(n-i);j++)
  {
    printf(" ");
  }
  for(int k=1;k<=i;k++)
  {
   printf("%d",k);
  }
  for(int l=2;l<=i;l++)
  {
  printf("%d",a);
  a--;
  }
  printf("\n");
 } 
}
  
