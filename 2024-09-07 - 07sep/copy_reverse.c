#include<stdio.h>
int main()
{
int n;
printf("enter the size\n");
scanf("%d",&n);
int a[n],b[n],v=(n-1);;
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int k=0;k<n;k++)
{
b[k]=a[v--];
}
printf("array in reverse order after copy in another array\n");
for(int j=(n-1);j>=0;j--)
{
printf("%d ",a[j]);
}
return 0;
}
