#include<stdio.h>
int large(int a);
int main()
{
int n;
printf("enter the size\n");
scanf("%d",&n);
large(n);
return 0;
}
int large(int n)
{
int a[n];
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int max=a[0];
for(int j=1;j<n;j++)
{
if(a[j]>max)
max=a[j];
}
//printf("max is %d",max);
int max1=a[0];
for(int j=1;j<n;j++)
{
if(a[j]==max)
continue;
if(a[j]>max1)
max1=a[j];
}
printf("seond largest number is %d",max1);
return 0; 
}

