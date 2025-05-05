#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
   if(i==1)
   printf("1");
   else
   printf("1/%d",i);
   if(i<n)
   printf("+");
 }
 return 0;
}
