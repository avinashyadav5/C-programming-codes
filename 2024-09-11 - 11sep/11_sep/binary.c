#include<stdio.h>
int main()
{
int n,c=0,a[100];
printf("enter a  value to find binary digit\n");
scanf("%d",&n);
for(int i=0;n>0;i++)
{
int r=n%2;
//printf("%d ",r);
a[i]=r;
c++;
n=n/2;
}
a[c];
for(int i=(c-1);i>=0;i--)
{
printf("%d ",a[i]);
}
return 0;
}
