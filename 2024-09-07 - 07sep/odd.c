#include<stdio.h>
int main()
{
int n,b=0;
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
b++;
}
}
if(b==0)
printf("no odd elements");
return   0;
}
