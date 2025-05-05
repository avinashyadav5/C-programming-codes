#include<stdio.h>
int main()
{
int n,c=0;
printf("enter a number to find factors \n");
scanf("%d",&n);
printf("factors are\n");
for(int i=1;i<=n/2;i++)
{
if(n%i==0)
printf("%d   ",i);
}
printf("%d",n);
return 0;
}
