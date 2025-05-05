#include<stdio.h>
int main()
{
long n,s=1;
printf("enter a no.\n");
scanf("%ld",&n);
for(long i=n;i>=1;i--)
{
s=s*i;
}
printf("factorial is %ld \n",s);
return 0;
}
