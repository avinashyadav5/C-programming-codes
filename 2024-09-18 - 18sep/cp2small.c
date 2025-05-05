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
int min=a[0],min1=a[1];;
for(int j=1;j<n;j++)
{
if(a[j]<min)
{
min=a[j];
if(min1<min)
min1=min;
}
}
printf("seond smallest  number is %d",min1);
return 0; 
}

