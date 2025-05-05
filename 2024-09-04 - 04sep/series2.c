#include<stdio.h>
#include<math.h>
int main()
{
int n,sum=0;
printf("enter terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
   sum+=(i*i);
 }
 printf("sum of series is %d",sum);
 return 0;
}
