#include<stdio.h>
int main()
{
int n;
printf("enter number of terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  for(int j=2;j<=i;j++)
   {
     printf(" ");
   }
  for(int l=n;l>=i;l--)
  {
   printf("* ");
  }
 printf("\n");
}
return 0;
}
