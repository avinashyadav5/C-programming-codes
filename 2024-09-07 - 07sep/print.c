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
printf("elements in are\n");
for(int i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
return 0;
}
