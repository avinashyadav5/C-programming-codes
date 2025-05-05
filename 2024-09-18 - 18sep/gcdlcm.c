#include<stdio.h>
int main()
{
int n1,n2,gcd=0,lcm=0;
printf("enter two number\n");
scanf("%d %d",&n1,&n2);
for(int i=1;i<=n2;i++)
{
if((n1%i==00)&&(n2%i==0))
gcd=i;
}
lcm=(n1*n2)/gcd;
printf("gcd is %d\n",gcd);
printf("lcm is %d\n",lcm);
return 0;
}
