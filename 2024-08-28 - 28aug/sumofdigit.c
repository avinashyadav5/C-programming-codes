#include<stdio.h>
int main()
{
int n,s=0;
printf("enter a number to sum \n");
scanf("%d",&n);
for( ;n>0;n/=10)
{
int r=n%10;
s=s+r;
}
printf("sum of digit %d",s);
return 0;
}
