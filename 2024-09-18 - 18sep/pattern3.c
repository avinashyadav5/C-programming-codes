#include<stdio.h>
int main()
{
int n,m;
printf("enter row and column\n");
scanf("%d %d",&n,&m);
for(int i=1;i<=4;i++)
{
for(int j=1;j<=4;j++)
{
if(i==1||i==4||j==1||j==4)
{
printf("* ");
}
else
printf("  ");
}
printf("\n");
}
return 0;
}
