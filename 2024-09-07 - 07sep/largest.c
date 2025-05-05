#include<stdio.h>
int main()
{
int n;
printf("enter the size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int max=0;
for(int j=0;j<n;j++)
{
if(a[j]>max)
max=a[j];
}
printf("largest number is %d",max);
return 0;
}
