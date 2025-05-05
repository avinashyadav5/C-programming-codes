#include <stdio.h>
int main()
{
int n;
printf("enter the size\n");
scanf("%d",&n);
int a[n];
int count=1;
printf("enter the elements to check duplicate\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
break;
}
}
}
if(count>1)
printf("number of duplicates are :%d",count);
else
printf("no duplicate found");
return 0;
}

