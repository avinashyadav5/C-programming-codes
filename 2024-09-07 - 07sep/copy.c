#include<stdio.h>
int main()
{
int n=5;
int a[5];
int b[5];
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int j=0;j<n;j++)
{
b[j]=a[j];
}
printf("elements in second array are:\n");
for(int j=0;j<n;j++)
{
printf("%d ",b[j]);
}
return 0;
}

