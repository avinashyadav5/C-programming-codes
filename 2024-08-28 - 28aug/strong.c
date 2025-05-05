#include<stdio.h>
int main()
{
int n,sum=0,s=1;
printf("enter a no.\n");
scanf("%d",&n);
int n1=n;
while(n>0)
{
int d=n%10;
for(int i=d;i>=1;i--)
{
s=s*i;
}
n/=10;
sum+=s;
s=1;
}
if(n1==sum)
printf("number is strong");
else
printf("number is not strong");
return 0;
}
