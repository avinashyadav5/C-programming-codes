#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
   printf("%d^2",i);
   if(i<n)
   printf("+");
 }
 return 0;
}
