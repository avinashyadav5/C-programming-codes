#include<stdio.h>
int main()
{
int n;
printf("enter terms to print\n");
scanf("%d",&n);
int fib[n];
fib[0]=0,fib[1]=1;
for(int i=2;i<n;i++)
{
fib[i]=fib[i-1]+fib[i-2];
}
printf("fibnoccai series is \n");
for(int i=0;i<n;i++)
{
printf("%d ",fib[i]);
}
return 0;
}

