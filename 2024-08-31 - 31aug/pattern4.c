#include<stdio.h>
int main()
{
int n;
printf("enter number of terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=i;j++)
   {
     printf("%d \t",i);
   }
  printf("\n");
 }
return 0;
}
