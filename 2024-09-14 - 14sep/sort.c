#include<stdio.h>
int main()
{
int n;
printf("enter no. of elements");
scanf("%d",&n);
int sorted=0;
int a[n];
printf("enter elements in array");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
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
printf("sorted array");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
