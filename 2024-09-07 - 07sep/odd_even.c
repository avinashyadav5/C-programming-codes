#include<stdio.h>
int main()
{
int n,c=0,m=0;
printf("enter the size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("odd elements are\n");
for(int j=0;j<n;j++)
{
if(a[j]%2==1)
{
printf("%d ",a[j]);
c++;
}
}
if(c==0)
printf("no odd numbers");
printf("\neven elements are\n");
for(int j=0;j<n;j++)
{
if(a[j]%2==0)
{
printf("%d ",a[j]);
m++;
}
}
if(m==0)
printf("no even numbers");
return   0;
}
