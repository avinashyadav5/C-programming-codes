#include <stdio.h>
int main()
{
int n,l,m;
printf("enter the size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter position at which u want to insert value\n");
scanf("%d %d",&l,&m);
printf("new array \n");
n++;
for(int i=n-1;i>=l;i--)
{
a[i]=a[i-1];
}
a[l-1]=m;
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
