#include<stdio.h>
int sot(int n,int a[]);
int main()
{
int n;
printf("enter no. of elements\n");
scanf("%d",&n);
int a[n];
printf("enter elements in array\n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sot(n,a);
}

int sot(int n,int a[])
{
int sorted=0;
for(int i=0;i<(n-1) && sorted==0;i++)
{
sorted=1;
for(int j=0;j<(n-i)-1;j++)
{
if(a[j]>a[j+1])
{
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
sorted=0;
}
}
}
printf("sorted array\n");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
