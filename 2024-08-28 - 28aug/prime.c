#include<stdio.h>
int main()
{
int n,c=0;
printf("enter a number to check prime \n");
scanf("%d",&n);
for(int i=1;i<=n/2;i++)
{
if(n%i==0)
c++;
}
if(c==1)
printf("prime\n");
else
printf("not prime\n");
return 0;
}

