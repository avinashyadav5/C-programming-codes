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
int min=a[0],max=0;
for(int j=1;j<n;j++)
{
if(a[j]<min)
min=a[j];
if(a[j]>min)
max=a[j];
}
//printf("smallest number is %d\n",min);
int min1=max;
for(int j=0;j<n;j++)
{
if(a[j]==min)
continue;
if(a[j]<min1)
min1=a[j];
}
printf("seond smallest number is %d",min1);
return 0; 
}

