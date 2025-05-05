#include<stdio.h>
int main()
{
int a,b,gcd;
printf("enter numbers to check gcd\n");
scanf("%d %d",&a,&b);
while(a!=b)
{
if(a>b)
a=a-b;
else
b=b-a;
}
gcd=b;
printf("%d\n",gcd);
return 0;
}
