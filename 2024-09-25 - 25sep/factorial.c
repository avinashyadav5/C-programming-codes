#include<stdio.h>
int fac(int n1);
int main()
{
int a,result;
printf("enter number to find factorial\n");
scanf("%d",&a);
result=fac(a);
printf("factorial of number is %d",result);
return 0;
}
int fac(int n)
{
int f=1;
for(int i=n;i>=1;i--)
{
f*=i;
}
return f;
}

