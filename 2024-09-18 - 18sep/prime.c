#include<stdio.h>
int main()
{
int n1,n2,c;
printf("enter two number for range\n");
scanf("%d %d",&n1,&n2);
printf("prime   number in range are\n");
for(int i=n1;i<=n2;i++)
{ 
c=0;
for(int j=1;j<=i;j++)
{
if(i%j==0)
c++;
}
if(c==2)
printf("%d \n",i);
}
return 0;
}
