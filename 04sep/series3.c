#include<stdio.h>
int main()
{
int n;float sum=0;
printf("enter terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
 sum=sum+(1/(float)i);
 }
 printf("sum of series is %f\n",sum);
 return 0;
}
 
