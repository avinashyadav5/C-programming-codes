#include <stdio.h>
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
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
printf("occurance of %d are at position %d",a[i],j);
}
printf("\n");
}
return 0;
}

